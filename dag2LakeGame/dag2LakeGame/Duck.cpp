#include "Duck.h"
#include <string>
#include "Lake.h"
Duck::Duck( int x, int y) :Animal(x, y)
{
	this->Animal::sprite = 'D';
	//this->lake.lake[x][y] = sprite;
}

Duck::~Duck()
{

}
