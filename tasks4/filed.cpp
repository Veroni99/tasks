#include<iostream>
#include<iomanip>

int main() {
	int conversionType;
	double temperature;
	std::cout <<" Enter 1 for Celsius or 2 for Celsius from Fahrenheit: ";
	std::cin >> conversionType;
        
	std::cout << "Enter the temperature: ";
	std::cin >> temperature; 

	if ((conversionType == 1 && temperature < -271.15) || (conversionType == 2 && temperature < -459.67)) {
		std::cout << "Too cold for counting" << std::endl;
	} else {
		if (conversionType == 1) {
			double fahrenheit = (temperature * 9.0 / 5.0) + 32;
			std::cout << "Temperature in Fahrenheit: " << std::fixed << std::setprecision(2) << fahrenheit << std::endl;
		} else if (conversionType == 2) {
			double celsius = (temperature - 32) * 5.0 / 9.0;
			std::cout << "Temperature in Celsius: " << std::fixed << std::setprecision(2) << celsius << std::endl;
		} else {
			std::cout << "Incorrect way of convertation" << std::endl;
		}
	}
	return 0;
}
