#include <iostream>
using namespace std;

long double func(double a, double b, char c);

int main()
{
    double a, b;
    char c;

    cout << "enter the a\n"; cin >> a;
    cout << "enter the b\n"; cin >> b;
    cout << "enter the operator\n"; cin >> c;
    cout << func(a,b,c);

    system("pause");
}

long double func(double a, double b, char c)
{
    switch (c)
    {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
    }
}