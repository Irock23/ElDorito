#include "Logging.hpp"
#include "../Patch.hpp"
#include "../ElDorito.hpp"

#include <cstdarg>
#include <fstream>
#include "../Modules/ModuleGame.hpp"

namespace
{
	void dbglog(const char* module, char* format, ...);
	void debuglog_string(char* name, char* value);
	void debuglog_int(char* name, int value);
	void debuglog_float(char* name, float value);
	int networkLogHook(char* format, ...);
	void __cdecl sslLogHook(char a1, int a2, void* a3, void* a4, char a5);
	void __cdecl uiLogHook(char a1, int a2, void* a3, void* a4, char a5);

	Hook NetworkLogHook(0x9858D0, networkLogHook);
	Hook SSLHook(0xA7FE10, sslLogHook);
	Hook UIHook(0xAED600, uiLogHook);
	Hook Game1Hook(0x106FB0, dbglog);
	Hook DebugLogFloatHook(0x2189F0, debuglog_float);
	Hook DebugLogIntHook(0x218A10, debuglog_int);
	Hook DebugLogStringHook(0x218A30, debuglog_string);
}

namespace Patches
{
	namespace Logging
	{
		void EnableNetworkLog(bool enable)
		{
			NetworkLogHook.Apply(!enable);
		}

		void EnableSslLog(bool enable)
		{
			SSLHook.Apply(!enable);
		}

		void EnableUiLog(bool enable)
		{
			UIHook.Apply(!enable);
		}

		void EnableGame1Log(bool enable)
		{
			Game1Hook.Apply(!enable);
		}

		void EnableGame2Log(bool enable)
		{
			DebugLogFloatHook.Apply(!enable);
			DebugLogIntHook.Apply(!enable);
			DebugLogStringHook.Apply(!enable);
		}
	}
}

namespace
{
	void dbglog(const char* module, char* format, ...)
	{
		char* backupFormat = "";
		if (!format)
			format = backupFormat;

		if (module != 0 && strcmp(module, "game_tick") == 0)
			return; // filter game_tick spam

		va_list ap;
		va_start(ap, format);

		char buff[4096];
		vsprintf_s(buff, 4096, format, ap);
		va_end(ap);

		Utils::DebugLog::Instance().Log(module, "%s", buff);
	}

	void debuglog_string(char* name, char* value)
	{
		Utils::DebugLog::Instance().Log("Debug", "%s: %s", name, value);
	}

	void debuglog_int(char* name, int value)
	{
		Utils::DebugLog::Instance().Log("Debug", "%s: %d", name, value);
	}

	void debuglog_float(char* name, float value)
	{
		Utils::DebugLog::Instance().Log("Debug", "%s: %f", name, value);
	}

	int networkLogHook(char* format, ...)
	{
		// fix strings using broken printf statements
		std::string formatStr(format);
		Utils::String::ReplaceString(formatStr, "%LX", "%llX");

		char dstBuf[4096];
		memset(dstBuf, 0, 4096);

		va_list args;
		va_start(args, format);
		vsnprintf_s(dstBuf, 4096, 4096, formatStr.c_str(), args);
		va_end(args);

		Utils::DebugLog::Instance().Log("Network", "%s", dstBuf);

		return 1;
	}

	void __cdecl sslLogHook(char a1, int a2, void* a3, void* a4, char a5)
	{
		char* logData1 = (*(char**)(a3));
		char* logData2 = (*(char**)((DWORD_PTR)a3 + 0x8));
		if (logData1 == 0)
			logData1 = "";
		else
			logData1 += 0xC;

		if (logData2 == 0)
			logData2 = "";
		else
			logData2 += 0xC;

		Utils::DebugLog::Instance().Log((const char*)logData1, (char*)logData2);
		return;
	}

	void __cdecl uiLogHook(char a1, int a2, void* a3, void* a4, char a5)
	{
		char* logData1 = (*(char**)(a3));
		if (logData1 == 0)
			logData1 = "";
		else
			logData1 += 0xC;

		Utils::DebugLog::Instance().Log("UiLog", (char*)logData1);
		return;
	}
}