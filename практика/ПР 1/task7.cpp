#include <iostream>

using std::cout;
using std::cin;

int main() {
    int a;

    cout << "Введите год: ";
    cin >> a;

    if (a % 400 == 0)
        cout << "Год високосный!";
    else if (a % 100 == 0)
        cout << "Год невисокосный!";
    else if (a % 4 == 0)
        cout << "Год високосный!";
    else
        cout << "Год невисокосный!";

    return 0;
}