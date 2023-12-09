#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>


using namespace std;

int main()
{
    double angle;
    cout << "Enter the angel in degrees"; cin >> angle;

    // Выполнение вычислений для чисел одинарной точности (float)
    cout << "sin: " << sinf(angle) << endl;
    cout << "cos: " << cosf(angle) << endl;
    cout << "tan: " << tanf(angle) << endl;
    cout << "cot: " << 1.0f / tanf(angle) << endl << endl;

    // Выполнение вычислений для чисел двойной точности (double)

    cout << "sin: " << sin(angle) << endl;
    cout << "cos: " << cos(angle) << endl;
    cout << "tan: " << tan(angle) << endl;
    cout << "cot: " << 1.0 / tan(angle) << endl << endl;  

    // Выполнение вычислений для чисел 4-кратной точности (long double)  

    std::cout << std::setprecision(std::numeric_limits<long double>::digits10 + 1);
    cout << "sin: " << sinl(angle) << endl;
    cout << "cos: " << cosl(angle) << endl;
    cout << "tan: " << tanl(angle) << endl;
    cout << "cot: " << 1.0L / tanl(angle) << endl << endl; 

    system("pause");
    
}