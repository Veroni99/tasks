#include<iostream>
#include<iomanip>

int main() {
	char symbol;
	std::cout << "Enter the symbol: ";
	std::cin >> symbol;

	int asciiCode = static_cast<int>(symbol);

	std::cout << "Symbol: " << symbol << std::endl;
	std::cout << "ASCII-Code (decimal): " << asciiCode << std::endl;
	std::cout << "ASCII-Code (hexadecimal): " << std::hex << asciiCode << std::endl;
	std::cout << std::dec;

	return 0;
}
