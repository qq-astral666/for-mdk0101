#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string input;
    std::vector<double> history;

    while (true) {
        char op;
        double result;
        double b;

        std::cout << "Enter first number: " << std::endl;
        std::cin >> input;
            if (input == "exit") {
                std::cout << "good luck baby" << std::endl;
                break;
            }

        double a = std::stod(input);

        std::cout << "Enter operator (+,-,*,/): " << std::endl;
        std::cin >> op;

        std::cout << "Enter second number: " << std::endl;
        std::cin >> b;

        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/':
                if (b == 0) {
                    std::cout << "Error: division by zero.";
                    continue;
                }
            default:
                std::cout << "Error: unknown operator.";
                continue;
        }
        std::cout << "Result: " << result << std::endl;
        history.push_back(result);
    }
    std::cout << "history: ";
    for (double r : history) {
        std::cout << r << "";
        std::cout << std::endl;
    }
    return 0;
}