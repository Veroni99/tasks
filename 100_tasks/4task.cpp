#include<iostream>
using namespace std;

int main() {
        try
        {
                const char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
                int n = -1;
                cin >> n;
                if (n < 0) throw std::runtime_error("Input value must be positive integer or 0");
                std::cout << (n < 10? words[n] : "Greater than 9") << std::endl;
                return 0;
        }
        catch (std::exception& e)
        {
                std::cerr << e.what() << std::endl;
                return 1;
        }

}
