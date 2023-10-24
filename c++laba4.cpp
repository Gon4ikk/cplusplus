
#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std;


int zadanie6(void) {
    setlocale(LC_ALL, "");
    bool answer;
    int value;

    cout << "Введіть значення: ";
    cin >> value;

    if ((value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10) || value == 111) {
        answer = true;
    }
    else {
        answer = false;
    }

    cout << (answer ? "Все добре" : "Все не добре") << endl;

    return 0;
}

void zadanie7() {
    double var1, var2, var3, var4, var5;

    cout << "Введіть 5 чисел";

    cin >> var1 >> var2 >> var3 >> var4 >> var5;

    cout << fixed << setprecision(1) << var1 << endl;
    cout << fixed << setprecision(2) << var2 << endl;
    cout << fixed << setprecision(6) << var3 << endl;
    cout << fixed << setprecision(2) << var4 << endl;
    cout << fixed << setprecision(0) << var5 << endl;
}

void zadanie8() {
    int num1, num2;
    float epsilon = 0.000001f;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;


    if (num1 == 0 || num2 == 0) {
        cout << "Нулем бути не може(" << endl;
    }
    else {

        float result1 = 1.0f / num1;
        float result2 = 1.0f / num2;

        if (fabs(result1 - result2) < epsilon) {
            cout << "Результати однакові (by " << epsilon << " epsilon)" << endl;
        }
        else {
            cout << "Результати різні" << endl;
        }
    }
}

void zadanie9() {

    int num1, num2, num3, num4;

    cout << "Введіть IP: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 >= 1 && num1 <= 255 &&
        num2 >= 1 && num3 <= 255 &&
        num3 >= 1 && num3 <= 255 &&
        num4 >= 1 && num4 <= 255) {
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    }
    else {
        cout << "Введене значення має бути в межах від 1 до 255";
    }

}

int main(void) {

    zadanie6();
    zadanie7();
    zadanie8();
    zadanie9();
    return 0;
}