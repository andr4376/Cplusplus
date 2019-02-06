#pragma once
class Animal
{
public:

	char sprite;

	int x, y;
	virtual void Update();

	Animal();

	Animal(int x, int y);
	~Animal();
};

