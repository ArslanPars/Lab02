// lab02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


#define FUNC(x) ((atan (x)) / ((x) * (x)))
#define Q(x, n) ((((-2.0) * (n) * ((x) * (x))) - ((x) * (x))) / (2.0 * (n) + 3.0))


int main()
{
	double a = 1.0, x = 0.1, S = 0.0;
	unsigned int n, N = 15;
	for (int n = 0; n <= N; ++n) {
		S += a;
		a *= Q(x, n);
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);	
    return 0;
}
