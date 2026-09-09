#include <iostream>

int main() {
    int month, year;
    std::cout << "Введите номер месяца и год: ";
    std::cin >> month >> year;

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int result = days[month -1];

    if (month == 2) {
        bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
        if (leap) result = 29;
    }
    std::cout  << result << "\n";
}