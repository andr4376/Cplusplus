#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <Windows.h>

using namespace std;

string grid[8][8];

void ResetPosition()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 0,0 };

	SetConsoleCursorPosition(output, pos);

}


void CreateGrid()
{
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			if (x == 1)
			{
				grid[x][y] = " p";
				continue;
			}
			if (x == 6)
			{
				grid[x][y] = "*p";
				continue;
			}

			grid[x][y] = "n";
		}
	}


	grid[0][0] = " R";
	grid[0][7] = " R";
	grid[7][7] = "*R";
	grid[7][0] = "*R";


	grid[0][1] = " K";
	grid[0][6] = " K";
	grid[7][1] = "*K";
	grid[7][6] = "*K";

	grid[0][2] = " B";
	grid[0][5] = " B";
	grid[7][2] = "*B";
	grid[7][5] = "*B";

	grid[0][3] = "*Q";
	grid[0][4] = "*M";

	grid[7][3] = "*M";
	grid[7][4] = "*Q";

}

void Update()
{

	int coords[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> coords[i];
	}

	grid[coords[2]][coords[3]] = grid[coords[0]][coords[1]];
	grid[coords[0]][coords[1]] = "n";
}

void Draw()
{
	ResetPosition();
	cout << string(100, '\n');

	ResetPosition();

	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{

			if (y == 0)
			{
				cout << " |";
			}
			if (grid[x][y] == "n")
			{
				cout << "   |";
			}
			else
			{

				cout << grid[x][y] << " |";
			}


		}
		cout << endl;

	}
}


int main()
{
	CreateGrid();
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();
	lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
	lpConsoleCurrentFontEx->dwFontSize.X = 30;
	lpConsoleCurrentFontEx->dwFontSize.Y = 30;
	SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);

	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 0, 0, 700, 500, TRUE); }

	while (true)
	{
		Draw();

		Update();

	//	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	}


	return 0;
}