#include "Duck.h"
#include <string>
#include "Lake.h"

Lake* lake;

void Duck::Update()
{
	if (x < 48)
	{
		this->x += rand() % 2;
	}
	if (x > 1)
	{
		this->x -= rand() % 2;

	}
	if (y < 13)
	{
		this->y += rand() % 2;
	}
	if (y > 0)
	{
		this->y -= rand() % 2;

	}
}

Duck::Duck(Lake &_lake, int _x, int _y)
{
	this->Animal::sprite = 'D';

	this->Animal::x = _x;
	this->Animal::y = _y;

	lake = &_lake;

	_lake.AddAnimal(*this);
}

Duck::~Duck()
{

}
