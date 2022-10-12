
#include<iostream>
using namespace std;

#define FOR
//#define WHILE
//#define DO...WHILE

void main()
{
	setlocale(LC_ALL, "");
	int num;
	int fact = 1;
	int i = 1;

	cout << "¬ведите число: "; cin >> num;

#ifdef FOR
	for (i; i <= num; i++)
	{
		cout << i << "! = ";
		fact *= i;
		cout << fact << endl;
	}
#endif // FOR

#ifdef WHILE
	while (i < num)
	{
		cout << i << "! = ";
		fact *= i;
		i++;
		cout << fact << endl;
	}
#endif // WHILE

#ifdef DO...WHILE
	do
	{
		cout << i << "! = ";
		fact *= i;
		i++;
		cout << fact << endl;
	} while (i < num);
#endif // DO...WHILE


}
