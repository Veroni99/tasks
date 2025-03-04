#include <iostream>

void primeFactorization(int n) {
    std::cout << n << " = ";

    while (n % 2 == 0) {
        std::cout << "2";
        n /= 2;
        if (n > 1) std::cout << ", ";
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            std::cout << i;
            n /= i;
            if (n > 1) std::cout << ", ";
        }
    }

    if (n > 1) {
        std::cout << n;
    }

    std::cout << std::endl;
}

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << "Number must be ≥ 2." << std::endl;
    } else {
        primeFactorization(number);
    }

    return 0;
}

