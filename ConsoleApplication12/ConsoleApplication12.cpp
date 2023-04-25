#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите уровень продаж для первого менеджера:\n";
    cin >> a;
    cout << "Введите уровень продаж для второго менеджера:\n";
    cin >> b;
    cout << "Введите уровень продаж для третьего менеджера:\n";
    cin >> c;
    if (a < 500)
    {
        a = a * 0.03 + 200;
    }
    else if (1000 > a > 500)
    {
        a = a * 0.05 + 200;
    }
    else if (a > 1000)
    {
        a = a * 0.08 + 200;
    }
    if (b < 500)
    {
        b = b * 0.03 + 200;
    }
    else if (1000 > b > 500)
    {
        b = b * 0.05 + 200;
    }
    else if (b > 1000)
    {
        b = b * 0.08 + 200;
    }
    if (c < 500)
    {
        c = c * 0.03 + 200;
    }
    else if (1000 > c > 500)
    {
        c = c * 0.05 + 200;
    }
    else if (c > 1000)
    {
        c = c * 0.08 + 200;
    }
    if (a > b && a > c)
    {
        a = a + 200;
    }
    else
    {
        if (b > c)
        {
            b = b + 200;
        }
        else
        {
            c = c + 200;
        }
    }
    cout << "Зарплата первого менджера " << a << endl;
    cout << "Зарплата второго менджера " << b << endl;
    cout << "Зарплата третьего менджера " << c << endl;

    return 0;
}