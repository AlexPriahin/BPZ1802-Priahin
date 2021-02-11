#include <stdio.h>
#include <math.h>

double function(double x);
void main()
{
	double f, x = 10;
	f = function(x);
	printf("x = %.4lf\nf = %.4lf\n\nx = ", x,f);
        scanf("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}

double function(double x)
{
	double f;
	f = -sqrt(x);
	return(f);
}
