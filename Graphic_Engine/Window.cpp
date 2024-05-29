#include "Window.h"

Window::Window()
{
}

bool Window::init()
{
    WNDCLASSEX wc;
    wc.cbClsExtra = NULL;
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.cbWndExtra = NULL;
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wc.hInstance = NULL;
    wc.lpszClassName = L"MyWindowClass";
    wc.lpszMenuName = NULL;
    wc.style = NULL;
    if (!::RegisterClassEx(&wc))
        return false;


    //Creation of the window
    m_hwnd=::CreateWindowEx(WS_EX_OVERLAPPEDWINDOW, L"MyWindowClass", L"Graphic Engine", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1024, 768,
        NULL, NULL, NULL, NULL);


    //if the creation of the window fails 
    if (!m_hwnd)
        return false;

    //show the window 
    ::ShowWindow(m_hwnd, SW_SHOW);
    ::UpdateWindow(m_hwnd);


    return true;
}

bool Window::release()
{

    //Destroy window 
    if (!::DestroyWindow(m_hwnd))
        return false;

    return true;
}

Window::~Window()
{


}
