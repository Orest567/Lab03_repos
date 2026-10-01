// Lab_03_3.cpp
// Довгунь Орест
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; 
    double R; 
    double y; 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // Розгалуження в повній формі
    if (x < -8 - R)
    {
        y = -R;
    }
    else if (x <= -8 + R)
    {
        y = -sqrt(R * R - (x + 8) * (x + 8));
    }
    else if (x <= 2)
    {
        y = 2 + (2 + R) / (10 - R) * (x - 2);
    }
    else if (x <= 6)
    {
        y = 0;
    }
    else
    {
        y = (x - 6) * (x - 6);
    }

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}