#pragma once
#include "Lake.h"
class Animal
{
public:

	char sprite;

	int x, y;
	void Update();

	Animal(int x, int y);
	~Animal();
};

