#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Fibonacci is not defined for negative numbers.\n";
        return 1;
    }

    int result = fibonacci(n);
    std::cout << "Fibonacci(" << n << ") = " << result << "\n";

    return 0;
}
