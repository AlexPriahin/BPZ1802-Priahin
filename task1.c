#include <stdio.h>
#include <math.h>

void main()
{   
    double x = 10, f, x1, f1;
    f = -sqrt(x);
    printf("x = %.4lf\nf = %.4lf\n\nx1 = ", x,f);
    scanf("%lf", &x1);
    f1 = -sqrt(x1);
    printf("f1 = %.4lf", f1);
}


