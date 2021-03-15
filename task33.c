#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 3.3
void print(int n, int k)
{
	double a;
	int k1;
        int i = 0;
	k1 = k;
	if (n!=0) 
	{
	do
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf(" Результат: %f\n", a);
		}
		++i;
	} while (i <= (n - 2));
	}
	else
	{
		printf("a = 0 \n");
	}
}
