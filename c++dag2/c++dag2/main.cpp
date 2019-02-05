#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
using namespace std;




int main()
{
	Person person("Bob", "Jeffy", "Anderson", 20, 168, 300);

	person.SetName("Bobby");

	Student student = Student("Andreas", "Kirkegaard", "Jensen", 25, 196, 100, 7, "Datamatiker");

	string outPut = person.Print();

	cout << outPut << endl;

	outPut = student.Print();
	cout << outPut << endl;

	getchar();
}