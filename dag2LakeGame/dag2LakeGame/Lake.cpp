#include "Lake.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include "Animal.h"
#include "Duck.h"
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

int waveCount = 0;


Animal* animals[10];


void Lake::PopulateLake(int amountOfAnimals)
{

}

Lake::Lake()
{

}


Lake::~Lake()
{
}


void Lake::Update()
{
	for (Animal* animal : animals)
	{
		if (animal != nullptr)
		{
		animal->Update();

		}
	}

}


void Lake::AddAnimal(Animal &refAnimal)
{
	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
	{

		if (!animals[i])
		{
			animals[i] = &refAnimal;

			break;
		}

	}

}



void Lake::PrintLake()
{
	system("cls");
	for (int x = 0; x < sizeof(lake) / sizeof(lake[0]); x++)
	{
		for (int y = 0; y <= 48; y++)
		{


			char c = lake[x][y];


			for (Animal* animal : animals)
			{
				if (animal != nullptr)
				{
					if (animal->x == x && animal->y == y)
					{
						c = animal->sprite;
					}
				}
			}

			switch (c)
			{
			case '@':
				SetConsoleTextAttribute
				(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				if (!waveCount == 1)
				{
					SetConsoleTextAttribute
					(handle, FOREGROUND_BLUE);

				}
				break;
			case '*':
				SetConsoleTextAttribute
				(handle, FOREGROUND_GREEN);
				break;
			case 'D':
				SetConsoleTextAttribute
				(handle, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				break;
			default:
				break;
			}

			std::cout << c;
		}
		waveCount++;
		if (waveCount >= 3)
		{
			waveCount = 0;
		}
		std::cout << std::endl;

	}
}

char Lake::MoveAnimal(int x, int y, int dx, int dy, char previousChar)
{
	char tmp = lake[dx][dy];

	lake[dx][dy] = lake[x][y];

	lake[x][y] = previousChar;

	return tmp;
}


