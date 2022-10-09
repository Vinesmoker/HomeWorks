/*
#include<iostream>
using namespace std;

//#define QUANTITY
//#define TO_LIMIT


void main()
{
	setlocale(LC_ALL, "");

#ifdef QUANTITY
	int quantity, sum = 1, buff1 = 0;
	int count = 0, buff2 = 1;
	cout << "Введите предел ряда Фибоначчи: "; cin >> quantity;
	cout << buff1 << endl; cout << buff2 << endl;
	for (count; count < (quantity - 2); count++)
	{
		sum = buff1 + buff2;
		buff1 = buff2;
		buff2 = sum;
		cout << sum << endl;
	}
#endif // QUANTITY

#ifdef TO_LIMIT
	int limit, sum = 1, buff1 = 0, count = 2, buff2 = 1;
	cout << "Введите предел ряда Фибоначчи: "; cin >> limit;
	cout << buff1 << endl; cout << buff2 << endl;
	for (count; count < limit; count++)
	{
		sum = buff1 + buff2;
		buff1 = buff2;
		buff2 = sum;
		if (sum > limit)
		{
			break;
		}
		cout << buff2 << endl;
	}
#endif // TO_LIMIT

}
*/