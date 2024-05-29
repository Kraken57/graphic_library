#pragma once
#include <Windows.h>


class Window
{
public:
	Window();

	//Initialize a Window
	bool init();
	//Release a Window 
	bool release();

	~Window();

protected:
	HWND m_hwnd;
};