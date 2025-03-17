#include<iostream>
int main()
{
double A,B,C;
std::cout << "Enter the size A:";
std::cin >> A;
std::cout << "Enter the size B:";
std::cin >> B;
std::cout << "Enter the size C:";
std::cin >> C;

double surfaceArea = 2*(A*B + A*C + B*C);
double volume = A * B * C;

std::cout << "Area of the surface:" << surfaceArea << std::endl;
std::cout <<"Volume:" << volume  << std::endl;
return 0;
}
