/*
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define LUCKY_TICKET
//#define CALC_IF
//#define CALC_SWITCH
//#define TICKET
//#define CHESS_BOARD
//#define FIBONACHI
//#define DEGREE
//#define FACTORIAL
//#define DEGREE
//#define ASCII
//#define FIBONACHI_2

void main()
{
    setlocale(LC_ALL, "Rus");

#ifdef LUCKY_TICKET

    int ticket_num, count1 = 0;
    cout << "Введите номер билета: ";
    cin >> ticket_num;
    int num = ticket_num;
    while (num)
    {
        num /= 10;
        count1++;
    }
    cout << "Количество цифр в номере билета: " << count1 << endl;

    int i = count1 / 2;
    int left_side = 0, right_side = 0, count;
    for (count = 0; count < i; count++)
    {
        left_side += ticket_num % 10; ticket_num /= 10;
    }
    for (count = 0; count < i; count++)
    {
        right_side += ticket_num % 10; ticket_num /= 10;
    }
    if (left_side == right_side) cout << "У Вас счастливый билет!!!" << endl;
    else { cout << "У вас обычный билет." << endl; }
    
#endif LUCKY_TICKET

#ifdef CALC_IF

    double number1, number2;
    char oper;
    cout << "Введите выражение: ";
    cin >> number1 >> oper >> number2;
    if (oper == '+')
    {
        cout << "Выражение: " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    }
    else if (oper == '-')
    {
        cout << "Выражение: " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    }
    else if (oper == '/')
    {
        cout << "Выражение: " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    }
    else if (oper == '*')
    {
        cout << "Выражение: " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    }

#endif CALC_IF

#ifdef CALC_SWITCH

    double number1, number2;
    char oper;
    cout << "Введите выражение: ";
    cin >> number1 >> oper >> number2;
    switch (oper)
    {
    case '-': cout << "Выражение: " << number1 << " - " << number2 << " = " << number1 - number2 << endl; break;
    case '+': cout << "Выражение: " << number1 << " + " << number2 << " = " << number1 + number2 << endl; break;
    case '*': cout << "Выражение: " << number1 << " * " << number2 << " = " << number1 * number2 << endl; break;
    case '/': cout << "Выражение: " << number1 << " / " << number2 << " = " << number1 / number2 << endl; break;
    }

#endif CALC_SWITCH

#ifdef TICKET

    int tic_num, a, b, c, d, e, f;
    cout << "Введите номер билета: " << endl;
    cin >> tic_num;
    a = tic_num / 100000;
    b = tic_num %1000000 / 100000;
    b = tic_num %100000 / 10000;
    c = tic_num %10000 / 1000;
    d = tic_num %1000 / 100;
    e = tic_num %100 / 10;
    f = tic_num %10;
    if (a + b + c == d + e + f)
        cout << "Билет счастливый!!!" << endl;
    else
        cout << "Обычный билет." << endl;
      
#endif TICKET

#ifdef CHESS_BOARD
    
    cout << "\n\t";
    char i;
    char j = 0;
    for (i = 'A'; i <= 'H'; ++i) 
    {
        cout << ' ' << i;
    }
    cout << endl;
    for (i = 1; i <= 8; i++)
    {
        cout << "\t";
        for (int j = 1; j <= 8; j++) 
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    cout << " " << char(255);
                }
                else
                {
                    cout << " " << char(254);
                }
            }
            if (i % 2 == 0)
            {
                cout << " ";
                if (j % 2 == 0)
                {
                    cout << char(255);
                }
                else
                {
                    cout << char(254);
                }
            }
            if (i == 1)
            {
                if (j == 8)
                {
                    cout << " " << 8;
                }
            
            }
            if (i == 2)
            {
                if (j == 8)
                {
                    cout << " " << 7;
                }
            }
            if (i == 3)
            {
                if (j == 8)
                {
                    cout << " " << 6;
                }
            }
            if (i == 4)
            {
                if (j == 8)
                {
                    cout << " " << 5;
                }
            }
            if (i == 5)
            {
                if (j == 8)
                {
                    cout << " " << 4;
                }
            }
            if (i == 6)
            {
                if (j == 8)
                {
                    cout << " " << 3;
                }
            }
            if (i == 7)
            {
                if (j == 8)
                {
                    cout << " " << 2;
                }
            }
            if (i == 8)
            {
                if (j == 8)
                {
                    cout << " " << 1;
                }
            }
        }
        cout << ("\n");
    }
    cout << ("\n \n");

#endif CHESS_BOARD

#ifdef FIBONACHI

    int num, i = 0, b = 1, sum;
    cin >> num;
    cout << i << endl;
    while (i < num)
    {
        sum = i + b;
        i = b;
        b = sum;
        cout << sum << endl;
    }
#endif // FIBONACHI

#ifdef DEGREE

    setlocale(LC_ALL, "Rus");
    int num, degree; 
    cout << "Введите число, возводимое в степень: ";
    cin >> num;
    long result = num;
    cout << "Введите степень числа: ";
    cin >> degree;
    for (int i = 0; i < degree; i++)
    {
        if (degree > 0)
        {
            result = result * num;
        }
        else result = result / num;
    }
    cout << "Результат вычисления: " << result << endl;

#endif // DEGREE

#ifdef FACTORIAL
    int n;
    double f = 1;  // Factorial
    cout << "Введите число: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "! = ";
        f *= i;
        cout << f << endl;
    }
#endif // FACTORIAL

#ifdef DEGREE
    double a; // Основание степени, умножаемое на себя.
    int n; // Показатель степени.
    double N = 1;
    cout << "Введите основание степени: "; cin >> a;
    cout << "Введите показатель степени: "; cin >> n;
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }
    for (int i = 0; i < n; i++)
    {
        N *= a;
    }
    cout << N << endl;
#endif // DEGREE

#ifdef ASCII
    cout << "Таблица ASCII символов: " << endl;
    for (int i = 0; i < 256; i++)
    {
        if (i % 16 == 0) cout << endl;
        cout << " " << (char)i << " ";
    }
#endif // ASCII

#ifndef FIBONACHI_2
    int n;
    cout << "Введите предельное число: "; cin >> n;
    for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
    {
        cout << a;
    }
    cout << endl;
#endif // FIBONACHI_2


}
*/