#include<iostream> 
#include<iomanip>

int main() {
	int m, n;

	std::cout << "Enter m and n: ";
	std::cin >> m >> n;

	if ( m >= 1 && m <= 100 && n >= 1 && n <= 100) {
		int value = 0;

		for (int i = 0; i < m; i++) {
			for ( int j = 0; j < n; j++) {
				std::cout << std:: setw(3) << value++ << " ";
			}
			std::cout << std::endl;
		}
	} else {
		std::cerr << "Error"<< std::endl ;
	}
	return 0;
}
