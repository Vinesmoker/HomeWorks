
#include<iostream>
#include<conio.h>
using namespace std;

//#define PIPHAGOR
//#define UP5_DOWN5
//#define UPLEFT1_DOWN5
//#define UP5_DOWNLEFT1
//#define UPRIGHT1_DOWN5
//#define UP5_DOWNRIGHT1
//#define ROMBUS
//#define PLUS_MINUS

int main()
{
    setlocale(LC_ALL, "");

#ifdef PIPHAGOR
    for (int i = 1; i < 10; i++)
    {
        cout << endl;
        for (int j = 1; j < 10; j++)
        {
            cout << i * j;
        }
    }
#endif // PIPHAGOR

#ifdef UP5_DOWN5

    int n; cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << "\t";
    }
#endif // UP5_DOWN5

#ifdef UPLEFT1_DOWN5
    int n = 1;
    int num; cout << "¬ведите размер фигуры: "; cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        for (int j = 0; j < n + i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
#endif // UPLEFT1_DOWN5

#ifdef UP5_DOWNLEFT1
    int n; cout << "¬ведите размер фигуры: "; cin >> n;
    for (int i = 1; i < n + 2; i++)
    {
        cout << endl;
        for (int j = 1; j < (n + 2) - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
#endif // UP5_DOWNLEFT1

#ifdef UPRIGHT1_DOWN5
    int n; cout << "¬ведите размер фигуры: "; cin >> n;
    int num = n;
    for (int i = 0; i < n; i++)
    {
        num--;
        cout << endl;
        for (int j = 0; j < n; j++)
        {

            if (j < num)cout << "   ";
            if (j >= num)cout << " * ";

            //if (n == 0)break;
        }
    }
#endif // UPRIGHT1_DOWN5

#ifdef UP5_DOWNRIGHT1
    int n = -1;
    int num; cout << "¬ведите размер фигуры: "; cin >> num;
    for (int i = 0; i < num; i++)
    {
        n++;
        cout << endl;
        for (int j = 0; j <= num; j++)
        {

            if (j < n)cout << "   ";
            if (j > n)cout << " * ";
        }
    }
#endif // UP5_DOWNRIGHT1

#ifdef ROMBUS

    int num; cout << "¬ведите размер фигуры: "; cin >> num;
    if (num % 2 == 1)num == num + 1;
    int a = num / 2; int b = num / 2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j == a)cout << (char)47;
            if (j == b)cout << (char)92;
            else cout << " ";
        }
        a--; b++;
        if (a == 0)break;
        cout << endl;
    }
    int c = num / num; int d = num;
    if (num % 2 == 1)d = num - 1;
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        for (int j = 0; j < num; j++)
        {
            if (j == c)cout << (char)92;
            if (j == d - 1)cout << (char)47;
            else cout << " ";
        }
        c++; d--;
        if (d == num / 2)break;
    }
#endif // ROMBUS

#ifdef PLUS_MINUS
    int num; cout << "¬ведите размер фигуры: "; cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        for (int j = 0; j < num; j++)
        {
            if (i % 2 == j % 2 == 0)cout << " - ";
            else cout << " + ";
        }
    }
#endif // PLUS_MINUS

}
