#include <iostream>

const int MAX_N = 1000;

void sieve_of_eratosthenes(int n) {
	
	bool prime[MAX_N + 1];
	std::fill(prime, prime + n + 1, true);
        prime[0] = prime[1] = false;	

	for (int j = 2; j * j <= n; j++) {
		if (prime[j]) {
			for (int i = j * j; i <= n; i += j)
				prime[i] = false;
		}
	}

	
	for (int j = 2; j <= n; j++) {
		if (prime[j])
			std::cout << j << " ";
	}
	std::cout << std::endl;
}

int main() {
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "\nPrime numbers to " << n << ":" << std::endl;
	sieve_of_eratosthenes(n);
	return 0;
}
