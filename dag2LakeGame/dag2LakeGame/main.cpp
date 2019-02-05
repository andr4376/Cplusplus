#include <iostream>
#include <string>
#include "Lake.h"
#include <windows.h>
#include <thread>
#include <chrono>
#include "Duck.h"

void SetupSreen()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 40;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 340, 550, 1200, 650, TRUE); }
}

int main()
{
	SetupSreen();

	Lake lake;

	Duck duck(5, 5);

	lake.MoveAnimal(0,0, 10, 10, 'A');
	while (true)
	{
		lake.PrintLake();

		lake.MoveAnimal(rand()%14, rand() % 50, rand() % 14, rand() % 50, ' ');

		std::this_thread::sleep_for(std::chrono::milliseconds(250));
	}

	return 0;
}