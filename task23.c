#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 2.3
double summ2(double eps)
{
	double a = 0;
	int i = 0;
	if (eps!=0)
	{
	do
	{
		a = a + func(i);
		++i;
	} while (fabs(a) <= eps);
	}
	return a;
}
