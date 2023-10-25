//Посчитать количество гласных в предложении
#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 14;
    char vowel[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'J', 'j', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string str;
    int a = 0;
    cout << "Введите предложение на английском:" << endl;
    getline(cin, str);
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (str[i] == vowel[j])
                a++;
        }
    }
    cout << "Количество гласных в предложении: " << a << endl;
    return 0;
}
