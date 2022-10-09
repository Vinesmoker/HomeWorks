/*
#include<iostream>
using namespace std;

//#define WHILE
//#define DO...WHILE
//#define FOR

void main()
{
	setlocale(LC_ALL, "");
	double num;
	int degree;
	cout << "¬ведите число, возводимое в степень: "; cin >> num;
	cout << "¬ведите показатель степени: "; cin >> degree;
	double buff = 1, i = 0;
	cout << "„исло " << num << " в степени " << degree << " = ";

	if (degree < 0)
	{
		num = 1 / num;
		degree = -degree;
	}

#ifdef WHILE
	while (i < degree)
	{
		buff *= num;
		i++;
	}
#endif // WHILE

#ifdef DO...WHILE
	do
	{
		buff *= num;
		i++;
	} while (i < degree);
#endif // DO...WHILE

#ifdef FOR
	for (i; i < degree; i++)
	{
		buff *= num;
	}
#endif // FOR

	cout << buff << endl;
}
*/