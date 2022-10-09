#include<iostream>
using namespace std;

//#define UP5_DOWN5
//#define UPLEFT1_DOWN5
//#define UP5_DOWNLEFT1
//#define UPRIGHT1_DOWN5
//#define UP5_DOWNRIGHT1

int main()
{

#ifdef UP5_DOWN5
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < 5; j++)
        {
            cout << " * ";
        }
        cout << "\t";
    }
#endif // UP5_DOWN5

#ifdef UPLEFT1_DOWN5
    int n = 1;
    for (int i = 1; i < 6; i++)
    {
        cout << endl;
        for (int j = 1; j < n + i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
#endif // UPLEFT1_DOWN5

#ifdef UP5_DOWNLEFT1
    int n = 7;
    for (int i = 1; i < 7; i++)
    {
        cout << endl;
        for (int j = 1; j < n - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
#endif // UP5_DOWNLEFT1

#ifdef UPRIGHT1_DOWN5
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        n--;
        cout << endl;
        for (int j = 0; j < 5; j++)
        {

            if (j < n)cout << "   ";
            if (j >= n)cout << " * ";

            //if (n == 0)break;
        }
    }
#endif // UPRIGHT1_DOWN5

#ifdef UP5_DOWNRIGHT1
    int n = -1;
    for (int i = 0; i < 5; i++)
    {
        n++;
        cout << endl;
        for (int j = 0; j <= 5; j++)
        {

            if (j < n)cout << "   ";
            if (j > n)cout << " * ";
        }
    }
#endif // UP5_DOWNRIGHT1

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        for (int j = 0; j < 5; j++)
        {
            if (j % 2 == 0)cout << " - ";
            else cout << " + ";
        }
    }
}