#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    int N, product = 1;
    std::cout << "Введіть натуральне число: ";
    std::cin >> N;

    while (N > 0) {
        int value = N % 10;
        if (value % 2 != 0) {
            product *= value;
        }
        N /= 10;
    }

    std::cout << "Добуток непарних цифр: " << product << std::endl;

    return 0;
}
