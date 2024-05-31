#pragma once
#include <Windows.h>


class Window
{
public:
	Window();

	//Initialize a Window
	bool init();
	bool broadcast();
	//Release a Window 
	bool release();

	//Event 
	virtual void onCreate() = 0;
	virtual void onUpdate() = 0;
	virtual void onDestroy() = 0;


	~Window();

protected:
	HWND m_hwnd;
};