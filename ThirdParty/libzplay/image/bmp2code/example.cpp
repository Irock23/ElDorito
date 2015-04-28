/* Creation of a simple Windows API program */

#include <windows.h>

/* use this function to create bitmap from memory
 */HBITMAP CreateBitmapFromMemory(HDC hdc,								// handle to device context, can be NULL
									int nWidth,							// Specifies the width of the bitmap, in pixels.
									int nHeight,						// Specifies the height of the bitmap, in pixels.
									unsigned int nBitPerPixel,			// Specifies the number of bits per pixel. This value must be 1, 4, 8, 16, 24, or 32.
									RGBQUAD *rgbColorTable,				// pSpecifies an array of RGBQUAD or doubleword data types that define the colors in the bitmap.
									unsigned int nColorUsed,			// Specifies the number of color indices in the color table ( number of elements in rgbColorTable array)
									VOID *pBitmapBitsArray,				// pointer to array containing bitmap data
									unsigned int nSizeOfBitmapArray);	// size of pBitmapBitsArray array in bytes.




/* ========== bitmap stored into color table and bits table ======== */


/* THIS DATA WAS GENERATED BY BMP2CODE APPLICATION */

/* color table, use this with CreateBitmapFromMemory function */
RGBQUAD *pColorTable = 0;

/* bitmap bits, use this with CreateBitmapFromMemory function */
unsigned char bitMap[] = {
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0,
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF,
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0
};

/* informations about bitmap, use this with CreateBitmapFromMemory function */

#define BITMAP_WIDTH 83
#define BITMAP_HEIGHT 14
#define BITMAP_BIT_PER_PIXEL 24
#define BITMAP_COLOR_USED 0
#define BITMAP_ARRAY_SIZE 3528

/* ================== END OF BITMAP DATA ======================================= */

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
char szClassName[ ] = "WindowsApp";


// my bitmap, global variable, used in WM_PAINT
HBITMAP myBitmap = 0;


int WINAPI
WinMain (HINSTANCE hThisInstance,
         HINSTANCE hPrevInstance,
         LPSTR lpszArgument,
         int nFunsterStil)

{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default color as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           "Windows App",       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           544,                 /* The programs width */
           375,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );


	/* CREATE BITMAP FROM DATA GENERATED BY BMP2CODE */
	myBitmap = CreateBitmapFromMemory(0, BITMAP_WIDTH, BITMAP_HEIGHT, BITMAP_BIT_PER_PIXEL, pColorTable, BITMAP_COLOR_USED, bitMap, BITMAP_ARRAY_SIZE);
	/* ================================================= */

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nFunsterStil);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK
WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
		case WM_PAINT:
		{
			PAINTSTRUCT  ps;
			BeginPaint(hwnd, &ps);
			HDC hdcmem = CreateCompatibleDC(ps.hdc);
			HBITMAP old = (HBITMAP) SelectObject(hdcmem, myBitmap);
			BitBlt(ps.hdc, 0, 0, BITMAP_WIDTH, BITMAP_HEIGHT, hdcmem, 0, 0, SRCCOPY);
			SelectObject(hdcmem, old);
			DeleteDC(hdcmem);
			EndPaint(hwnd, &ps);
		}
		break;
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}


/* definition of CreateBitmapFromMemory function */
HBITMAP CreateBitmapFromMemory(HDC hdc, int nWidth, int nHeight, unsigned int nBitPerPixel, RGBQUAD *rgbColorTable, unsigned int nColorUsed, VOID *pBitmapBitsArray, unsigned int nSizeOfBitmapArray)
{
	unsigned int fDeleteDC = 0;
	if(hdc == 0) {
		hdc = CreateCompatibleDC(NULL);
		if(hdc == 0) return 0;
		fDeleteDC = 1;
	}			
	if(nWidth == 0 ||nHeight == 0 || nBitPerPixel == 0) return 0;
	if(nColorUsed != 0 && rgbColorTable == 0) return 0;
	// allocate memory for BITMAPINFO + memory for RGBQUAD color table
	BITMAPINFO *pBitmapInfo = (BITMAPINFO*) malloc(sizeof(BITMAPINFO) + nColorUsed * sizeof(RGBQUAD));
	if(pBitmapInfo == 0) return 0;
	// set BITMAPINFO VALUES
	pBitmapInfo->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	pBitmapInfo->bmiHeader.biWidth = nWidth;
	pBitmapInfo->bmiHeader.biHeight = nHeight;
	pBitmapInfo->bmiHeader.biPlanes = 1;
	pBitmapInfo->bmiHeader.biBitCount = nBitPerPixel; 
	pBitmapInfo->bmiHeader.biCompression = BI_RGB;
	pBitmapInfo->bmiHeader.biSizeImage = nSizeOfBitmapArray;
	pBitmapInfo->bmiHeader.biXPelsPerMeter = 0;
	pBitmapInfo->bmiHeader.biYPelsPerMeter = 0;
	pBitmapInfo->bmiHeader.biClrUsed = nColorUsed;
	pBitmapInfo->bmiHeader.biClrImportant = 0;
	unsigned int i;
	for(i = 0; i < nColorUsed; i++) {
		pBitmapInfo->bmiColors[i].rgbBlue = rgbColorTable[i].rgbBlue;
		pBitmapInfo->bmiColors[i].rgbGreen = rgbColorTable[i].rgbGreen;
		pBitmapInfo->bmiColors[i].rgbRed = rgbColorTable[i].rgbRed;
		pBitmapInfo->bmiColors[i].rgbReserved = 0;
	}
	// create bitmap
	VOID *pBits;
	HBITMAP hbm = CreateDIBSection(hdc, pBitmapInfo, DIB_RGB_COLORS, &pBits, NULL, 0); 
	if(fDeleteDC)
		DeleteDC(hdc);
	free(pBitmapInfo);
	if(hbm == 0) return 0;
	// copy data to bitmap
	memcpy(pBits, pBitmapBitsArray, nSizeOfBitmapArray);
	return hbm;
}