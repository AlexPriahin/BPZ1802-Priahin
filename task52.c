#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 5.2
int findFirstNegativeElement(double esp)
{
	double a;
	int i = 0;
	int i1 = 0;
	_Bool flag = 0;
	while (flag == 0)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;			
			flag = 1;
			return i1;
		}
		i++;
	}
}

