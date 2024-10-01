#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    const int size = 2;
    int a = rand() % 1 + 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = a;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Введите любое лисло от 0 до 10\n";
        int chislo = 0;
        cin >> chislo;
        if (chislo < 0 || chislo > 10)
        {
            cout << "Число должно быть больше нуля и меньше десяти";
        }
        else
        {
            if (arr[i] == chislo)
            {
                
                cout << "Поздравляю, число угадано\n";
            }
            else
            {
                
                cout << "НЕудача\n";
            }
        }
    }
    
    
    return 0;
}
