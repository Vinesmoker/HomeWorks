#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num; cout << "Enter a size of the chess board (the board size must be not more than 10!): "; cin >> num;
    const char n = 10;
    char arr[n] = { 'A','B','C','D','E','F','G','H','I','j'};
    for (int i = 0; i < num; i++)
    {
        cout << "      " << arr[i] << "  ";
        cout << " ";
    }
    cout << endl << (char)218;
    for (int i = 0; i < num * 10 + 1; i++)
    {
        cout << (char)196;
    }
    cout << (char)191;
    cout << endl;
    for (int size = 1; size <= num; size++)
    {
        if (size % 2 == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 1; j <= (num * num) / 2; j++)
                {
                    if (j == 1)cout << (char)179;
                    if (j % num == 0)
                    {
                        for (int i = 0; i < 5; i++)
                        {  
                            cout << "  ";
                        }
                    }
                    if (j == num * (num / 2))cout << " " << (char)179;
                    if (j == num * (num / 2) && i == 2)cout << " " << size - 1;
                    if (j % num == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << (char)219 << (char)219;
                        }
                    }
                }
                cout << endl;
            }
        }
        if (size % 2 == 0)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 1; j <= (num * num) / 2; j++)
                {
                    if (j == 1)cout << (char)179;
                    if (j % num == 0)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << (char)219 << (char)219;
                        }
                    }
                    if (j == num * (num / 2))cout << " " << (char)179;
                    if (j == num * (num / 2) && i == 2)cout << " " << size;
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
    }
    cout << (char)192;
    for (int i = 0; i < num * 10 + 1; i++)
    {
        cout << (char)196;
    }
    cout << (char)217;
}