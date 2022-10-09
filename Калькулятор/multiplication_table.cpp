/*
#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    cout << "\n" << "\t\t\t" << "Таблица умножения" << endl;
    for (int i = 2; i < 10; i++)
    {
        if (i)cout << endl;
        for (int j = 2; j < 6; j++)
        {
            if (i < 10)cout << " ";
            if (i < 11)cout << " "; cout << j << " x  ";
            if (j < 10)cout << i << " = ";
            if ((i * j) < 10)cout << " ";
            cout << (i * j) << "\t";
        }
    }
    for (int i = 10; i <= 10; i++)
    {
        if (i)cout << "\t" << endl;
        for (int j = 2; j < 6; j++)
        {
            if (i < 11)cout << " ";
            if (i < 11)cout << " "; cout << j << " x ";
            if (j < 10)cout << i << " = ";
            cout << i * j << "\t";
        }
    }
    cout << endl;
    for (int i = 2; i < 10; i++)
    {
        if (i)cout << endl;
        for (int j = 6; j < 10; j++)
        {
            if (i < 10)cout << " ";
            if (i < 11)cout << " "; cout << j << " x  ";
            if (j < 10)cout << i << " = ";
            if ((i * j) < 10)cout << " ";
            cout << (i * j) << "\t";
        }
    }
    for (int i = 10; i <= 10; i++)
    {
        if (i)cout << "\t" << endl;
        for (int j = 6; j < 10; j++)
        {
            if (i < 11)cout << " ";
            if (i < 11)cout << " "; cout << j << " x ";
            if (j < 10)cout << i << " = ";
            cout << i * j << "\t";
        }
    }
}
*/