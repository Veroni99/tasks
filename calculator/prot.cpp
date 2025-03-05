#include <iostream>
#include <iomanip>

short pos = 0;

// Function to check if a character is whitespace
bool isWhitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

// Skip any whitespace in the input string
void skipWhitespace(const char* input) {
    while (isWhitespace(input[pos])) {
        pos++;
    }
}

// Parse a number (supports integers and decimals)
double parseNumber(const char* input) {
    double num = 0;
    while (input[pos] >= '0' && input[pos] <= '9') {
        num = num * 10 + (input[pos] - '0');
        pos++;
    }
    if (input[pos] == '.') {
        double fraction = 0.1;
        pos++;
        while (input[pos] >= '0' && input[pos] <= '9') {
            num += fraction * (input[pos] - '0');
            pos++;
            fraction /= 10;
        }
    }
    return num;
}

// Compute factorial
long factorial(int num) {
    long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

// Parse and evaluate expressions (supports Polish notation)
double parsePolishExpression(const char* input) {
    skipWhitespace(input);  // Skip leading whitespace

    // Check if current character is an operator
    char oper = input[pos];
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '!') {
        pos++;
        if (oper == '!') {
            double operand = parsePolishExpression(input);
            return factorial(static_cast<int>(operand));
        } else {
            double operand1 = parsePolishExpression(input);
            double operand2 = parsePolishExpression(input);

            if (oper == '+') return operand1 + operand2;
            if (oper == '-') return operand1 - operand2;
            if (oper == '*') return operand1 * operand2;
            if (oper == '/') {
                if (operand2 == 0) {
                    std::cerr << "Error: Division by zero!" << std::endl;
                    exit(1);
                }
                return operand1 / operand2;
            }
        }
    }

    // If not an operator, parse as a number
    return parseNumber(input);
}

int main() {
    char math[100];

    std::cout << "Enter a mathematical expression in Polish notation: ";
    std::cin.getline(math, 100);

    pos = 0;
    double result = parsePolishExpression(math);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

