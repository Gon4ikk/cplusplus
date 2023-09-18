#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	double a = 10, b = 0.5, c = 1, d = 12.21, resultOne, resultTwo;

	resultOne = (0.314 * exp(a) - 0.512 * exp(b)) / (sin(b / 3 * M_PI)) * log(a);

	resultTwo = (0.81 * cbrt(c) - 1 / 2.125 * cbrt(d)) * exp(c);

	cout << resultOne << endl;
	cout << resultTwo << endl;
	return 0;
}
