#include <iostream>

using namespace std;

int main() {

    double R, x, y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((x >= 0 && x * x + y * y <= R * R) ||
        (x <= 0 && y >= -R && y <= R && y >= -x && y <= x)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}