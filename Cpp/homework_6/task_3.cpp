//Определить, является ли заданное число простым.
#include <iostream>
#include <locale>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            cout << a << " - составное число" << endl;
            return 0;
        }
    }
        cout << a << " - простое число" << endl;
        return 0;
}
