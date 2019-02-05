#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Student :
	public Person
{
public:

	int grade;
	string currentClass;

	Student(string _name, string _middleName, string _lastName, int _age,
		int _height, int _thiccNess, int _grade, string _currentClass);

	~Student();

	string Print();
};

