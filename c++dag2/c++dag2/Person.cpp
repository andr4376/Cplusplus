#include "Person.h"




Person::Person(string _name, string _middleName, string _lastName, int _age, int _height, int _thiccNess)
{
	name = _name;
	middleName = _middleName;
	lastName = _lastName;
	age = _age;
	height = _height;
	thiccNess = _thiccNess;
}


Person::~Person()
{
}

string Person::Print()
{
	string result = "Name: " + name + " " + middleName + " " + lastName
		+ ", age: " + to_string(age) + ", height: " + to_string(height)
		+ ", thiccness: " + to_string(thiccNess);
	return result;
}

string Person::GetName() const
{
	return name;
}

string Person::GetMiddleName() const
{
	return middleName;
}

string Person::GetLastName() const
{
	return lastName;
}

int Person::GetAge() const
{
	return age;
}

int Person::GetHeight() const
{
	return height;
}

int Person::GetThiccNess() const
{
	return thiccNess;
}

void Person::SetName(string _name)
{
	name = _name;
}

void Person::SetMiddleName(string _mN)
{
	middleName = _mN;
}

void Person::SetLastName(string _lN)
{
	lastName = _lN;
}

void Person::SetAge(int _a)
{
	age = _a;;
}

void Person::SetHeight(int _h)
{
	height = _h;
}

void Person::SetThiccNess(int _t)
{
	thiccNess = _t;
}
