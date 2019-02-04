// ConsoleApplication1cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void YellowExercise(int num = 100)
{
	cout << num << endl;

	if (num > 0)
	{
		YellowExercise(num - 1);

	}
}

void GuessWho()
{
	bool correct = false;



	while (!correct)
	{
		int num = rand() % 10 + 1;

		int attempts = 0;

		cout << num << endl;

		int guess;

		cin >> guess;

		while (guess != num)
		{
			cout << "Wrong" << endl;

			attempts++;

			if (attempts >= 3)
			{
				break;
			}

			cin >> guess;

		}


		if (attempts >= 3)
		{
			cout << "Failed" << endl;

		}
		else
		{
			cout << "Correct" << endl;

		}
	}
}
void WriteArray()
{

	char a[] = { "reeeeeeeeeeeEeeee" };

	int arrayLenght = ((sizeof(a) / sizeof(a[0])));

	for (int i = 0; i < arrayLenght; i++)
	{
		std::cout << a[i];

	}

	std::cout << "\n";

	for (char s : a)
	{
		std::cout << s;

	}


	std::cout << "\n";


	for (int j = arrayLenght - 1; j >= 0; j--)
	{
		std::cout << a[j];

	}

	cout << endl;
	cout << endl;



	char multiArr[3][4];


	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			multiArr[x][y] = '#';
			cout << multiArr[x][y];
		}
		cout << endl;
	}


}

void GuessNumber()
{
	bool correct = false;

	while (!correct)
	{
		int num = rand() % 10 + 1;

		int attempts = 0;

		cout << num << endl;

		int guess;

		cin >> guess;

		while (guess != num)
		{
			cout << "Wrong" << endl;

			attempts++;

			if (attempts >= 3)
			{
				break;
			}

			cin >> guess;

		}


		if (attempts >= 3)
		{
			cout << "Failed" << endl;

		}
		else
		{
			cout << "Correct" << endl;

		}
	}
}

int main()
{

	YellowExercise();

	WriteArray();

	GuessNumber();





	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
