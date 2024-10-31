#include<iostream> 
int main()
{ double a, b;
std::cout << "Enter the first number (a):";
std::cin >> a;
std::cout <<" Enter the second number (b):";
std::cin >> b;

double sum = a + b;
double difference = a - b;
double product = a * b;

std::cout <<"Sum:"<< sum << std::endl; 
std::cout << "Difference:" << difference << std::endl;
std::cout << "Multiplication:" << product << std::endl;
return 0;
}
