#include <iostream>
#include <math.h>
using namespace std;

void pz1();

int main() {
	
	setlocale(LC_ALL, "Russian");
	cout << "\ninput x: ";
	int x;
	double result;
	cin >> x;
	int a; int b;
	cout << "\nPrint a: ";
	cin >> a;
	cout << "\nPrint b: ";
	cin >> b;
	if (x <= 0) {
		result = x ^ 3 + a * b;
		cout << "\nx=" << x;
		cout << "\nresult=" << result;
	}

	else if (x == 0)
	{
		result = sin(a / b) + 4 * b * x;
		cout << "\nx=" << x;
		cout << "\nresult=" << result;
	}


	else {
		result = sqrt(x) + a / b;
		cout << "\nx=" << x;
		cout << "\nresult=" << result;
	}


	pz1();
	

	return 0;
}

void pz1() {

	setlocale(LC_ALL, "Russian");
	cout << "\nSecond task ";
	cout << "\ninput x: ";
	float x;
	cin >> x;
	cout << "\ninput y: ";
	float y;
	cin >> y;

	if (1 >= x && x >= 0 && y <= 0 && y >= -1) {
		cout << "\nПопадає";

	}
	else if (-1 <= x && x <= 0 && 1 <= y && y >= 0) {
		cout << "\nПопадає";
	}

	else {
		cout << "\nНе попадає";
	}



}




