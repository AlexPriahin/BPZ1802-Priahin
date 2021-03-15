#include <math.h>
#include <stdio.h>
#include "func.h"

//задание 1.1
double summ(int n)
{
	double a=0;
	for (int i = 0; i <= (n - 1); ++i)
	{
              a = a+func(i);
	}
	return a;
}
