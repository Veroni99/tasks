#include <iostream>
#include <cmath>

bool isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    std::cout << "Palindroms:";

    for (int i = 1; i < 100; ++i) {
        if (isPalindrome(i)) { 
            int square = i * i;
            if (isPalindrome(square)) { 
                std::cout << i << "^2 = " << square << std::endl;
            }
        }
    }

    return 0;
}

