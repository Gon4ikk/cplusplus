#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    int N, product = 1;
    std::cout << "Введіть натуральне число: ";
    std::cin >> N;

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        N /= 10;
    }

    std::cout << "Добуток непарних цифр: " << product << std::endl;

    return 0;
}