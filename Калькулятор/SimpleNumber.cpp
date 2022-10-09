/*
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int limit;
	cout << "¬ведите предел простых чисел: "; cin >> limit;
	for (int i = 2; i < limit; i++)
	{
		bool buff = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				buff = false;
				break;
			}
		}
		if (buff)
		{
			cout << i << endl;
		}
	}
}
*/