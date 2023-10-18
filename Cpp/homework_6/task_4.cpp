//Определить, является ли заданный год високосным.
#include <iostream>
#include <locale>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите год: ";
    cin >> a;
    if (a % 4 == 0)
      cout << a << " - високосный год" << endl;
    else
      cout << a << " - не високосный год" << endl;
    return(0);
}
