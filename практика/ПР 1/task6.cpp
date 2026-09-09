#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Введите третье число: ";
    std::cin >> c;

    // 1. Сначала проверяем, существует ли треугольник
    if (a + b > c || b + c > a || c + a > b) {
        // 2. Если существует, проверяем теорему Пифагора для всех вариантов гипотенузы
        if (std::pow(a, 2) == std::pow(b, 2) + std::pow(c, 2) ||
            std::pow(b, 2) == std::pow(a, 2) + std::pow(c, 2) ||
            std::pow(c, 2) == std::pow(a, 2) + std::pow(b, 2)) {
            std::cout << "YES!" << std::endl;
            } else {
                std::cout << "NO" << std::endl;
            }
    } else {
        // Если треугольник не существует
        std::cout << "Undefined" << std::endl;
    }

    return 0;
}