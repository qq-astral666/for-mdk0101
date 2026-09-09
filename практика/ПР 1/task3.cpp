#include <iostream>

using std::cout;
using std::cin;

int main() {
    double cm;
    double duim{2.54};
    double result;

    cout << "Введите число: " << std::endl;
    cin >> cm;

    result = cm / duim;

    cout << "Ваше число в дюймах: " << result << std::endl;
}