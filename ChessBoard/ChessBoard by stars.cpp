#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num; cout << "Enter a size of the chess board (the number entered must be less than 10!): "; cin >> num;
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < (num * num) / 2; j++)
                {
                    if (j % num == 0)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << " *";
                        }
                    }
                    if (j % num == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
        }
        if (i % 2 == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < (num * num) / 2; j++)
                {
                    if (j % num == 0)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << "  ";
                        }
                    }
                    if (j % num == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << " *";
                        }
                    }
                }
                cout << endl;
            }
        }
    }
}