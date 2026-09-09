#include <iostream>
#include <cmath>

int main() {
    int n, sum = 0;
    std::cout << "Введите число: ";
    std::cin >> n;

    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    std::cout << "Сумма цифр в числе: " << sum;
}