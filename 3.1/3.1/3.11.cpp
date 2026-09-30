// Lab_03_1.cpp
// Довгунь Орест Любомирович
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; 
    double y; 
    double A; 
    double B; 

    cout << "x = ";
    cin >> x;

    A = 2 + 6 * x;

    // Спосіб 1: розгалуження в скороченій формі
    if (x <= 0)
        B = log(cos(x)) + pow(x, 5);

    if (x > 0 && x <= 3)
        B = 1.0 / tan((1 + log(x)) / 3.0); // ctg(a) = 1 / tan(a)

    if (x > 3)
        B = 12 * x - pow(x, 8);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x <= 0)
        B = log(cos(x)) + pow(x, 5);
    else
        if (x > 3)
            B = 12 * x - pow(x, 8);
        else
            B = 1.0 / tan((1 + log(x)) / 3.0);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}