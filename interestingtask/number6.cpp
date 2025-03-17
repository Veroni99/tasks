#include <iostream>
#include<string>

std::string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
std::string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                       "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
std::string tens[] = {"", "ten", "twenty", "thirty", "fourty", "fifty",
                      "sixty", "seventy", "eighty", "ninety"};
std::string hundreds[] = {"", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred",
                          "six hundred", "seven hundred", "eight hundred", "nine hundred"};

std::string numberToWords(int n) {
    if (n == 0) return "zero";
    if (n == 1000) return "thousand";

    std::string result = "";

    int h = n / 100;
    int t = (n / 10) % 10;
    int u = n % 10;

    if (h) result += hundreds[h] + " ";
    if (t == 1) {
	    result += teens[u];
    } else {
	    if (t) result += tens[t] + " ";
	    if (u) result += units[u];
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number (≤ 1000): ";
    std::cin >> n;

    if (n < 0 || n > 1000) {
        std::cout << "The number must be in position of 0-1000!\n";
    } else {
        std::cout << "Numbers by words: " << numberToWords(n) << std::endl;
    }

    return 0;
}

