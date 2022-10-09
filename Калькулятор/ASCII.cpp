/*
#include<iostream>
using namespace std;

//#define WHILE
//#define DO...WHILE
//#define FOR

void main()
{
	setlocale(LC_ALL, "");
	int i = 0;
	
#ifdef WHILE
	while (i < 256)
	{
		if (i % 16 == 0)
		{
			cout << endl;
		}
		cout << char(i) << " ";
		i++;
	}
#endif // WHILE

#ifdef DO...WHILE
	do
	{
		if (i % 16 == 0)
		{
			cout << endl;
		}
		i++;
		cout << (char)i << " ";
	} while (i < 256);
#endif // DO...WHILE

#ifdef FOR
	for (i; i < 256; i++)
	{
		if (i % 16 == 0)
		{
			cout << endl;
		}
		cout << (char)i << " ";
	}
#endif // FOR
}
*/