#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int num; cout << "¬ведите размер фигуры: "; cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        for (int j = 0; j < num; j++)
        {
            if (i % 2 == j % 2 == 0)cout << "- ";
            else cout << "+ ";
        }
    }
}
