//Найти факториал заданного числа.
#include <iostream>
#include <locale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    unsigned long long b = 1;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
        b = b * i;
    cout << a << "! = " << b << endl;
    return 0;
}
