// lab02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define Q(x, n) ((((-2.) * (n) * ((x) * (x))) - ((x) * (x))) / (2. * (n) + 3.))
#define FUNC(x) ((atan (x) - (x)) / ((x) * (x)))
#define COND(x) (x) < (-1) || (x) > 1 ? printf("error\n"): NULL

int main()
{
	double a = 1.0, x = 0.001, S = 0.0;
	COND(x);
	for (int i = 0; i <= 15; ++i) {
		S += a;
		a *= (double)Q(x, i);
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
		getchar();
    return 0;
}






//Q(x, n) (((-2.) * (n) * (x) * (x)-(x) * (x)) / (2. * (n)+3.))
//Q(x, n) ((((-2.) * (n) * ((x) * (x))) - ((x) * (x))) / (2. * (n) + 3.))
