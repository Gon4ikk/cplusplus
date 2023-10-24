#include <math.h>
#include <iostream>

using namespace std;

int zadanie1(void)
{
    setlocale(LC_ALL, "Ukrainian");
    for (int i = 0; i < 5; i++) {
        int x;
        cout << "Enter an x: ";
        cin >> x;
        double y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << y << endl;

    }
    return 0;
   
}

void zadanie2() {
    setlocale(LC_ALL, "Ukrainian");
    int product = 1;

    for (int i = 4; i < 40; i += 4) {
        product *= i;
    }

    cout << "Добуток чисел, кратних 4 і менших за 40: " << product;

  

}

int main(void) {

    zadanie1();
    zadanie2();
    return 0;
   
}
