#include <windows.h>
#include <iostream>
#include <fstream>

bool SaveBitmapToFile(HBITMAP hBitmap, HDC hDC, LPCSTR filename) {
    BITMAP bmp;
    GetObject(hBitmap, sizeof(BITMAP), &bmp);

    BITMAPFILEHEADER bmfHeader = {};
    BITMAPINFOHEADER bi = {};

    bi.biSize = sizeof(BITMAPINFOHEADER);
    bi.biWidth = bmp.bmWidth;
    bi.biHeight = -bmp.bmHeight; // negative for top-down bitmap
    bi.biPlanes = 1;
    bi.biBitCount = 24;
    bi.biCompression = BI_RGB;

    DWORD dwBmpSize = ((bmp.bmWidth * 24 + 31) / 32) * 4 * bmp.bmHeight;

    std::ofstream file(filename, std::ios::out | std::ios::binary);
    if (!file)
        return false;

    BYTE* lpBitmapData = new BYTE[dwBmpSize];
    GetDIBits(hDC, hBitmap, 0, (UINT)bmp.bmHeight, lpBitmapData, (BITMAPINFO*)&bi, DIB_RGB_COLORS);

    bmfHeader.bfType = 0x4D42;
    bmfHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
    bmfHeader.bfSize = dwBmpSize + bmfHeader.bfOffBits;

    file.write((char*)&bmfHeader, sizeof(bmfHeader));
    file.write((char*)&bi, sizeof(bi));
    file.write((char*)lpBitmapData, dwBmpSize);

    file.close();
    delete[] lpBitmapData;

    return true;
}

int main() {
    // Get screen dimensions
    int screenX = GetSystemMetrics(SM_CXSCREEN);
    int screenY = GetSystemMetrics(SM_CYSCREEN);

    // Get device contexts
    HDC hScreenDC = GetDC(NULL);
    HDC hMemoryDC = CreateCompatibleDC(hScreenDC);

    // Create a compatible bitmap
    HBITMAP hBitmap = CreateCompatibleBitmap(hScreenDC, screenX, screenY);
    HGDIOBJ oldBitmap = SelectObject(hMemoryDC, hBitmap);

    // Copy the screen to the bitmap
    BitBlt(hMemoryDC, 0, 0, screenX, screenY, hScreenDC, 0, 0, SRCCOPY);

    // Save to file
    SaveBitmapToFile(hBitmap, hMemoryDC, "screenshot.bmp");

    // Cleanup
    SelectObject(hMemoryDC, oldBitmap);
    DeleteObject(hBitmap);
    DeleteDC(hMemoryDC);
    ReleaseDC(NULL, hScreenDC);

    std::cout << "Screenshot saved as screenshot.bmp\n";
    return 0;
}
