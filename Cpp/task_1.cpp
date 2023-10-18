//Вывести таблицу умножения для заданного числа.
#include <iostream>
#include <locale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число, для которого хотите увидеть таблицу умножения: " << endl;
    cin >> a;
    cout << "Таблица умножения для числа " << a << ":" << endl;
    {
        int i{ 1 };
        while (i < 11)
        {
        cout << a << " * " << i << " = " << a * i << endl; 
        i++;
        }
    }
    return 0;
}
