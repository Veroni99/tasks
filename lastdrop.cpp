#include <iostream>
#include <cmath>  

const int MAX_STACK_SIZE = 100;

long factorial(int num) {
    long result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

double evaluateRPN(const char* expression) {
    double stack[MAX_STACK_SIZE];
    int top = -1; 

    for (int i = 0; expression[i] != '\0'; ++i) {
        char ch = expression[i];

        if (ch == ' ') continue;

        if (ch >= '0' && ch <= '9') {
            double num = 0;
            while (expression[i] >= '0' && expression[i] <= '9') {
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            
            if (expression[i] == '.') {
                ++i;
                double fraction = 0.1;
                while (expression[i] >= '0' && expression[i] <= '9') {
                    num += fraction * (expression[i] - '0');
                    fraction /= 10;
                    ++i;
                }
            }
            --i; 
            stack[++top] = num; 
        } 

        else {
            if (ch == '!') {
                if (top < 0) {
                    std::cerr << "Error: No operand for factorial" << std::endl;
                    exit(1);
                }
                double operand = stack[top--];
                if (operand < 0 || floor(operand) != operand) {
                    std::cerr << "Error: Factorial is only defined for non-negative integers" << std::endl;
                    exit(1);
                }
                stack[++top] = factorial(static_cast<int>(operand));
            } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                if (top < 1) {
                    std::cerr << "Error: Insufficient operands for operator " << ch << std::endl;
                    exit(1);
                }
                double b = stack[top--];
                double a = stack[top--];
                if (ch == '+') stack[++top] = a + b;
                else if (ch == '-') stack[++top] = a - b;
                else if (ch == '*') stack[++top] = a * b;
                else if (ch == '/') {
                    if (b == 0) {
                        std::cerr << "Error: Division by zero" << std::endl;
                        exit(1);
                    }
                    stack[++top] = a / b;
                }
            } else {
                std::cerr << "Error: Invalid character " << ch << " in expression" << std::endl;
                exit(1);
            }
        }
    }

    if (top != 0) {
        std::cerr << "Error: Too many operands in expression" << std::endl;
        exit(1);
    }

    return stack[top];
}

int main() {
    char expression[100];

    std::cout << "Enter a Reverse Polish Notation (RPN) expression: ";
    std::cin.getline(expression, 100);

    try {
        double result = evaluateRPN(expression);
        std::cout << "Result: " << result << std::endl;
    } catch (...) {
        std::cerr << "An error occurred during evaluation" << std::endl;
    }

    return 0;
}

