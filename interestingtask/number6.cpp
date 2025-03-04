#include <iostream>
#include <vector>

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

    result += hundreds[n / 100];
    if (!result.empty() && n % 100 > 0) result += " ";

    int lastTwo = n % 100;
    if (lastTwo >= 10 && lastTwo < 20) {
        result += teens[lastTwo - 10];
    } else {
        result += tens[lastTwo / 10];
        if (!result.empty() && lastTwo % 10 > 0) result += " ";
        result += units[lastTwo % 10];
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

