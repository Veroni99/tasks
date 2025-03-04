#include <iostream>

void findPythagoreanTriplets(int n) {
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {  
            int c2 = a * a + b * b;
            int c = static_cast<int>(sqrt(c2)); 

            if (c * c == c2 && c <= n) { 
                std::cout << "(" << a << ", " << b << ", " << c << ")\n";
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number n: ";
    std::cin >> n;

    std::cout << "Three numbers (a, b, c) for a^2 + b^2 = c^2:\n";
    findPythagoreanTriplets(n);

    return 0;
}

