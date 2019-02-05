#include "Student.h"
#include <string>


Student::Student(string _name, string _middleName, string _lastName, int _age, int _height, int _thiccNess, int _grade, string _currentClass) : Person(_name, _middleName, _lastName, _age, _height, _thiccNess)
{
	grade = _grade;
	currentClass = _currentClass;
}

Student::~Student()
{
}

string Student::Print()
{
	string result = Person::Print();
	return result + ", grade: " + to_string(grade) + ", class: " + currentClass;
}
