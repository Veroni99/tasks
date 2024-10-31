#include<iostream>
#include<iomanip>

int main()
{
    float P;
    int T;
    float R;

    std::cout << "Enter the sum P: ";
    std::cin >> P;

    std::cout << "Enter period of the int T(in years): ";
    std::cin >> T; 

    std::cout << "Enter the interest rate R: ";
    std::cin >> R;
    
    float I = (P * T * R)/100;
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Simple interest (in the form of float): " << I << std::endl;
    std::cout << "Simple interest (in the form of int): " << static_cast<int>(I) << std::endl;

    return 0;
}
