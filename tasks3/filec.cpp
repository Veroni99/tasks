#include<iostream>
#include<iomanip>

int main() {
	int number;
	std::cout << "Enter the full number: ";
	std::cin >> number;

	if (number / 2 == 0) { 
		std::cout << "The number is even: YES" << std::endl;
	} else {
		std::cout << "The number is even: NO" << std::endl;
	}
	if (number / 8 == 0) {
		std::cout << "The number devides on 8: YES" << std::endl;
	} else {
		std::cout << "The number devides on 8: NO" << std::endl;
	}
	if (number / 16 == 0) {
		std::cout << "The number devides on 16: YES" << std::endl;
	} else {
		std::cout << "The number devides on 16: NO" << std::endl;
	}
	std::cout << "The number in eight-fold form: " << std::oct << number << std::endl;
	std::cout <<"The number in hex form: " << std::hex << number << std::endl;
	return 0;
}
