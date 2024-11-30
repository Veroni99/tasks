#include <iostream>
 
int main() {
	int a, b, c;
	a = 5;
	b = 6;
	
	c = a;
	a = b;
	b = c;

	int x1 = 7, x2 = 8;
	int &x3 = x1;
	x3 = 9;
       	int* px1;
	px1 = &x1;
	int* px2;
	px2 = &x2;
	int* px3;
	px3 = &x3;
	std::cout << "x1: "<<  x1  << "\nx2: " << x2  << "\nx3: "<< x3  << std::endl;
	std::cout<< "px1: " << px1  << std::endl;
	std::cout<< "px1: " << (long) px1  << std::endl;
	std::cout<< "px2: " << px2  << std::endl;
        std::cout<< "px2: " << (long) px2  << std::endl;
	std::cout<< "px3: " << px3  << std::endl;
        std::cout<< "px3: " << (long) px3  << std::endl;
	return 0;

}
