#pragma once
#include <string>

using namespace std;

class Person
{

private:
	string name, middleName, lastName;

	int age, height, thiccNess;


public:

	string GetName() const;
	string GetMiddleName()const;
	string GetLastName()const;

	int GetAge()const;
	int GetHeight()const;
	int GetThiccNess()const;

	void SetName(string _name);
	void SetMiddleName(string _mN);
	void SetLastName(string _lN);

	void SetAge(int _a);
	void SetHeight(int _h);
	void SetThiccNess(int _t);


	Person(string _name, string _middleName, string _lastName, int _age, int _height, int _thiccNess);

	~Person();

	string Print();
};


