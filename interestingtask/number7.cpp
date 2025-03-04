#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void findTwinPrimes(int n) {
    for (int i = n; i <= 2 * n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    cout << "Couples of numbers " << n << " and " << 2 * n << ", difference of this number 2:" << endl;
    findTwinPrimes(n);

    return 0;
}

