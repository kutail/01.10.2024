#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    const int size = 10;
    int a = rand() % 1 + 10;
    int vvod = 0;
    int random[size];
    int polsovatel[size];
    for (int i = 0; i < size; i++)
    {
        random[i] = a;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Введите число: ";
        cin >> vvod;
        if (vvod < 0 || vvod > 10)
        {
            cout << "Число должно быть больше нуля и меньше десяти";
        }
        else
        {
            polsovatel[i] = vvod;
            if ( random[i] == polsovatel[i])
            {
                cout << "Угадал !\n";
            }
            else
            {
                cout << "НЕ угадал(\n";
            }
        }
    }
    return 0;
}
