#include<iostream>

int main() {
	int a, b, c;
 	std::cin >> a >> b >> c;
	
	if (a >= 1 && a <= 1000 && b >= 1 && b <= 1000 && c >= 1 && c <= 1000){
		 std::cout << "Sum: " << a + b + c << std::endl;
	} else {
		std::cout << "False" << std::endl;
	}

	return 0;
}
