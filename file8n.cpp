#include<iostream>  

int main() {
	int number;
	std::cin >> number;
	int num, num1, num2;
	std::cin >> num >> num1;
	num2 = num;
	num = num1;
	num1 = num;

	std::cout << num << " " << num1 << std::endl;
	std::cout << "Lacky ticket" << std::endl;
	std::cout << "Unlacky ticket " << std::endl;
	return 0;
}

