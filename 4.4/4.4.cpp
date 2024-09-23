#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, x, y;

  
    cout << "xp: ";
    cin >> xp;
    cout << "xk: ";
    cin >> xk;
    cout << "dx: ";
    cin >> dx;

    cout << fixed;
    cout << "-----------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(12) << "y" << " |" << endl;
    cout << "-----------------------------------" << endl;

    
    x = xp;
    while (x <= xk) {
        if (x <= 0) {
            y = -2; // ³����� y = -2 ��� x <= 0
        }
        else if (x > 0 && x < 1) {
            y = x * x; // �������� y = x^2 ��� 0 < x < 1
        }
        else if (x >= 1 && x <= 2) {
            y = 2; // ˳�� y = 2 ��� 1 <= x <= 2
        }
        else {
            y = 4 - x; // ˳�� y = 4 - x ��� x > 2
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(5) << y << " |" << endl;

     
        x += dx;
    }

    cout << "-----------------------------------" << endl;

    return 0;
}
