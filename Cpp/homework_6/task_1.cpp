//Вывести таблицу умножения для заданного числа
#include <locale>
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число, для которого хотите увидеть таблицу умножения: ";
    cin >> a;
    cout << "Таблица умножения для числа " << a << ":" << endl;
    for (int i = 1; i <= 10; i++) 
      cout << a << " * " << i << " = " << a * i << endl;
    return 0;
}
