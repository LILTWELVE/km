// km.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    
    float m, km;

    cout << "Введите метры: ";
    cin >> m;

    km = m / 1000;
    cout << m << " метров будет " << km << " километра" << endl;

    return 0;
}


