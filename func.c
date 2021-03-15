#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "func.h"


float func(int i)
{
	return pow(-1, i)* ((pow(i, 2) + 1)) / (pow(i, 2) +3);
}
