#pragma once
#include "Animal.h"
#include "WalkingAnimal.h"
#include "SwimmingAnimal.h"
#include "FlyingAnimal.h"
#include <string>
#include "Lake.h"

class Duck :
	public Animal, 
	public WalkingAnimal,
	public SwimmingAnimal,
	public FlyingAnimal
{
public:
	Duck( int x, int y);
	~Duck();
};

