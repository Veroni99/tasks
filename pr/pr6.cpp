#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, z1, z2, z3;

    cout << "Enter the meaning of a, b, c: ";
    cin >> a >> b >> c;

    if ((c - b) == 0) {
        z1 = -555;
    } else {
        z1 = (pow(a, 2) + b) / (c - b);
    }

    if ((a + c - b) < 0) {
        z2 = -777;
    } else {
        z2 = sqrt(a + c - b);
    }

    if ((c * c - a) < 0) {
        z3 = -777;
    } else if (sqrt(c * c - a) == 0) {
        z3 = -555;
    } else {
        z3 = b / sqrt(c * c - a);
    }

    cout << "Results" << endl;
    cout << "\t1\t2\t3" << endl;
    cout << fixed << setprecision(2);
    cout << setw(7) << z1 << "\t" << setw(7) << z2 << "\t" << setw(7) << z3 << endl;

    return 0;
}
