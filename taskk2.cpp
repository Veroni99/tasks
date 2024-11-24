
#include<iostream>

int main () {
	int m , n , k;

	std::cout << " Enter three numbers for m , n and k : ";
	std::cin >> m >> n >> k;

	if (1 <= k && k < m && k < n && m <= 100 && n <= 100) {
		for ( int i = 0; i < m; i++) {
			for ( int j = 0; j < n; j++) {
				if (i < k || i >= m - k || j < k || j >= n - k) {
					std::cout << "*";
				} else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	} else {
		std::cerr << "Error";
	}
	return 0;
}
