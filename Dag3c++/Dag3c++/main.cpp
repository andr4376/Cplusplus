#include <iostream>

using namespace std;

void Oevelse2Dag3()
{

	//short value = 7;
	//short otherValue = 3;

	////data type foran * = det er en pointer -> en addresse
	//short *ptr = &value;

	//std::cout << *ptr; //* foran variable uden data type foran -> dereference -> henter værdien af adressen


	short value = 7; // &value = 0012FF60
	short otherValue = 3; // &otherValue = 0012FF54
	short *ptr = &value;
	cout << &value << endl;
	cout << value << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;


	*ptr = 9;
	cout << &value << endl;
	cout << value << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;

	//
	ptr = &otherValue;
	cout << &otherValue << endl;
	cout << otherValue << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;
}

void Oevelse3dag2()
{
	int var = 5;

	int *prtVar = &var;

	cout << &var << endl;
}
struct ArrayStruct
{
	int* ptrAdresse;

	int amount;

	ArrayStruct(int* _adresse, int _amount) : ptrAdresse(_adresse), amount(_amount)
	{

	}

};
ArrayStruct SwapTwoElementsOfArray(int *prtArrayStart, int amountOfElements)
{
	for (int i = 0; i < amountOfElements; i++)
	{
		std::cout << *(prtArrayStart + i) << std::endl;
	}


	std::cout << endl;

	int tmp = *prtArrayStart;

	*prtArrayStart = *(prtArrayStart + amountOfElements - 1);

	*(prtArrayStart + amountOfElements - 1) = tmp;


	for (int i = 0; i < amountOfElements; i++)
	{
		std::cout << *(prtArrayStart + i) << std::endl;
	}
	ArrayStruct arrayStruct(prtArrayStart, amountOfElements);
	return arrayStruct;
}

void Oevelse5()
{
	//Opret en ny variable på heapen (vha. new keyword)
	//Derefter frigiv hukkommelsen(delete), og slet adresse referencen(nullptr)

	while (true)
	{
		int * i = new int; //Instanciate variable on heap

		delete i; //frigiv hukkommelsen

		i = nullptr; //slet adresse referencen

	}


}

int main()
{
	Oevelse5();

	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };


	ArrayStruct arra(arr, 15);

	ArrayStruct arra2 = SwapTwoElementsOfArray(arr, sizeof(arr) / sizeof(*arr));


	cout << endl;

	for (int i = 0; i < arra2.amount; i++)
	{
		std::cout << *(arra2.ptrAdresse + i) << std::endl;
	}


	getchar();


	return 0;
}