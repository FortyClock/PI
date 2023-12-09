#include <iostream>
#include <vector>

using namespace std;

void printFibonacci(int n) {
    std::vector<int> fibonacci;

    
    for (int i = 0; i < n; ++i) 
    {
        if (i < 2) {
            fibonacci.push_back(i);
        } else {
            fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
        }
    }

    
    cout << "the Fibonacci row of (" << n << " elements): ";
    for (int i = 0; i <= n; i++) 
    {
        cout << fibonacci[i] << " ";
    }
    cout << endl;
}

int main() {
    // Ввод количества чисел Фибоначчи
    int n;
    cout << "enter the count of numbers: ";
    cin >> n;

    printFibonacci(n);

    system("pause");
}
