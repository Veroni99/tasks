#include<iostream> 
#include<iomanip>

int main() {
	double num1, num2;

	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;

	std::cout << std::fixed << std::setprecision(12);

	std::cout << "Sum: " << (num1 + num2) << std::endl;
	std::cout << "Difference: " << (num1 - num2) << std::endl;
	std::cout << "Multiplication: " << (num1 * num2) << std::endl;

	if(num2 = 0) {
		std::cout << "Division: " << (num1 / num2) << std::endl;
} else {
	std::cout << "Error: division on zero!" << std::endl;
}
return 0;
}
