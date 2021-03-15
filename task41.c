#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 4.1
int findFirstElement(double esp)
{
	double a;
	int i1 = 0;
	_Bool flag;
	flag = 1;
	for (int i = 0; flag==1; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
				i1 = i;
				flag = 0;
				break;
		}
		else
			continue;

	}
	return i1;
}
