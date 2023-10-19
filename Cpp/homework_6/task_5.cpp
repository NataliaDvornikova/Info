//Отразить строку
#include <iostream>
#include <locale>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите предложение только на английском, потому русский у меня не работает: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str << endl;
    return(0);
}
