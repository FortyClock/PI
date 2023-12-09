#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <chrono>

using namespace std;

void random();

int main()
{
    srand(time(NULL));
    int n;
    cout << "enter the count of random numbers\n"; cin >> n;

    // Вывод случайного числа из библиотеки

    for(int i = 0; i <= n; i++)
    {
        cout << rand()%1000 + 1 << endl;
    }

    // Вывод случайного числа с помощью собственной функции
    cout << "/////////////////////////////\n";
    for(int i = 0; i <= n; i++)
    {
        random();
    }

    system("pause");
}

void random()
{
    mt19937 generator;
    generator.seed(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution_int(1, 1000);
    int random_integer = distribution_int(generator);
    cout << random_integer << endl;

}