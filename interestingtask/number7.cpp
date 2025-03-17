#include <iostream>

const int MAX_N = 2000;  

void sieve_of_eratosthenes(bool prime[], int limit) {
   
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;  

    for (int i = 2; i * i <= limit; i++) {
        if (prime[i]) {

            for (int j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }
}

void find_prime_twins(int n) {

    bool prime[MAX_N + 1]; 
    sieve_of_eratosthenes(prime, 2 * n);

    std::cout << "Pairs of prime-twin numbers [" << n << ", " << 2 * n << "]:" << std::endl;
    for (int i = n; i <= 2 * n - 2; i++) {
        if (prime[i] && prime[i + 2]) {
            std::cout << "(" << i << ", " << i + 2 << ")\n";
        }
    }
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    if (n < 2 || n > 1000) {
        std::cout << "n must be in diapason [2, 1000]\n";
        return 1;
    }

    find_prime_twins(n);
    return 0;
}
