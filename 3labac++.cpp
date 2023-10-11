#include <iostream>
#include <math.h>

using namespace std;

void task2();

int main()
{

    setlocale(LC_ALL, "Russian");

   pochatok:  cout << "Введіть трьохзначне додатнє число\n";
    int N;
    cin >> N;
    if (N >= 100) {
        int per = N / 100;
        int vtor = N / 10 % 10;
        int tret = N % 100 % 10;

        int sum = 0;

        if (per > 5) {
            sum += per;
        }

        if (vtor > 5) {
            sum += vtor;
        }

        if (tret > 5) {
            sum += per;
        }
        cout << per << "\n" << vtor << "\n" << tret;
        cout << "\nsum=" << sum;
    }
    else {
        cout << "Введене число не відповідає умові";
        goto pochatok;
    }

    task2();

}

void task2() {

    cout << "\nВведіть номер потягу";
    int number;
    cin >> number;


    switch(number) {
    case 1:
        cout << "Потяг номер 1 вирушає з Китаю до Сінгапуру";
        break;
    case 2:
        cout << "Потяг номер 2 вирушає з Франції до Аргентини";
        break;
    case 3:
        cout << "Потяг номер 3 вирушає з Львова до Японії";
        break;
    case 4:
        cout << "Потяг номер 4 вирушає з Німеччини до Польщі";
        break;
      case 5:
          cout << "Потяг номер 5 вирушає з Китаю до Італії";
          break;
      case 6:
          cout << "Потяг номер 6 вирушає з Індії до Мексики";
          break;
      case 7:
          cout << "Потяг номер 7 вирушає з України до Польщі";
          break;
      default:
          cout << "Ви помилились, такого потягу немає";
}


}

