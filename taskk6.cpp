#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int width = 2 * n - 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < width; ++j) {           
            if (j == n - 1 - i || j == n - 1 + i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < width; ++j) {
            if (j == n - 1 - i || j == n - 1 + i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
