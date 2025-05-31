#include<opencv2/opencv.hpp>
#include<windows.h>

    HDC hwindowDC = GetDC(hwnd);
    HDC hwindowCompatibleDC = CreateCompatibleDC(hwindowDC);
    RECT windowsize;
    GetClientRect(hwnd, &windowsize);

    int width = windowsize.right;
    int height = windowsize.bottom;

    HBITMAP hbwindow = CreateCompatibleBitmap(hwindowDC, width, height);
    SelectObject(hwindowCompatibleDC, hbwindow);
    BitBlt(hwindowCompatibleDC, 0, 0, width, height, hwindowDC, 0, 0, SRCCOPY);

    BITMAPINFOHEADER bi = { sizeof(BITMAPINFOHEADER), width, -height, 1, 32, BI_RGB };
    cv::Mat mat(height, width, CV_8UC4);
    GetDIBits(hwindowCompatibleDC, hbwindow, 0, height, mat.data, (BITMAPINFO*)&bi, DIB_RGB_COLORS);

    DeleteObject(hbwindow);
    DeleteDC(hwindowCompatibleDC);
    ReleaseDC(hwnd, hwindowDC);

    return mat;
}

int main() {
    HWND hwnd = GetDesktopWindow(); // Capture entire screen
    int fps = 30;
    cv::Size screenSize(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
    cv::VideoWriter writer("screen_record.avi", cv::VideoWriter::fourcc('M','J','P','G'), fps, screenSize);

    for (int i = 0; i < 300; ++i) { // Record 10 seconds at 30fps
        cv::Mat frame = hwnd2mat(hwnd);
        cv::Mat bgr;
        cv::cvtColor(frame, bgr, cv::COLOR_BGRA2BGR); // Convert to BGR
        writer.write(bgr);
        cv::waitKey(33); // ~30 FPS
    }

    writer.release();
    return 0;
}
