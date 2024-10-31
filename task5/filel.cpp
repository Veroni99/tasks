#include<iostream>
#include<iomanip>
int main() 
{
    double R;
    const double PI = 3.14;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> R;

    double area = PI * R * R;
    double circumference = 2 * PI * R;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Length of the circle: " << circumference << std::endl;

    return 0;
}
