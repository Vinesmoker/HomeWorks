#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num; cout << "Enter a size of the chess board (the number entered must be less than 10!): "; cin >> num;
    cout << "\t" << (char)218;
    for (int i = 0; i < (num * 10) + 1; i++)
    {
        cout << (char)196;
    }
    cout << (char)191 << endl;
    cout << 1;
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
                        if (j == 0)cout << "\t" << (char)179;
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
                        if (j == 5)cout << " " << (char)179;
                    }
                }
                cout << endl;
            }
        }
        if (i == 2)cout << num;
        if (i % 2 == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                if (i == 1)cout << "    " << 2;
                for (int j = 0; j < (num * num) / 2; j++)
                {
                    if (j % num == 0)
                    {
                        if (j == 0)cout << "\t" << (char)179;
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
                        if (j == num + 1)cout << " " << (char)179;
                    }
                }
                cout << endl;
            }
        }
        if (i == 1)cout << 3;
    }
    cout << "\t" << (char)192;
    for (int i = 0; i < (num * 10) + 1; i++)
    {
        cout << (char)196;
    }
    cout << (char)217 << endl;
}
