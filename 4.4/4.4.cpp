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
            y = -2; // Відрізок y = -2 для x <= 0
        }
        else if (x > 0 && x < 1) {
            y = x * x; // Парабола y = x^2 для 0 < x < 1
        }
        else if (x >= 1 && x <= 2) {
            y = 2; // Лінія y = 2 для 1 <= x <= 2
        }
        else {
            y = 4 - x; // Лінія y = 4 - x для x > 2
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(5) << y << " |" << endl;

     
        x += dx;
    }

    cout << "-----------------------------------" << endl;

    return 0;
}
