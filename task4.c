#include <stdio.h>
#include <math.h>

void function();
double x, result;
void main()
{
	x = 10;
	function();
	printf("x = %.4lf\nf = %.4lf\n\nx = ", x, result);
        scanf("%lf", &x);
	function();
	printf("f = %.4lf", result);
}

void  function()
{
	result=-sqrt(x);
}
