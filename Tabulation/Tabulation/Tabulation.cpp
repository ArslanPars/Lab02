// Tabulation.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define FUNC1(x) (x)*(x)*(x) - 2 
#define FUNC2(x) 3 - (x)
#define FUNC3(x) 3 * (x) - 2 * (x) * (x) * (x) 
#define COND1(x) (x) <= (-4.0)
#define COND2(x) (x) >= (-4) && (x) <= 3.0
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))
#define TABULATE(msg, a, b, h, c) \
	printf(msg);\
	for (x = a; x <= b; x +=h){\
		if (c == 'X')\
		 printf("%6.2f%c", x, PUT_DELIM(x, h, b));\
		 else\
		 printf("%6.2f%c", FUNC(x), PUT_DELIM(x, h, b));\
	}

int main()
{
	double a = -5.0, b = 4.0, x, h = 0.12;
	TABULATE("x:\t", a, b, h, 'X');
	TABULATE("y:\t", a, b, h, 'Y');
	return 0;
}
