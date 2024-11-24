#include<iostream>

int main () {
	int n , m;
	std::cout << " Enter two numbers n and m: ";
	std::cin >> m >> n;

	if (m >= 1 && m <= 100 && n >= 1 && n <= 100) {
		for ( int i = 0; i < m; i++) {
			for ( int j = 0; j < n; j++) {
				std::cout << "*";
			}
			std::cout << std::endl;
		}
	} else {
		std::cout << " Error , enter the available " << std::endl;
	}
	return 0;
}
