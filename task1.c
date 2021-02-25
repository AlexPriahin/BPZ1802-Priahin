#include <stdio.h>
#include <math.h>
_Bool isInArea(double x, double y)
{
    if ((x <= 1) && (y >= 0) && (pow(x, 2) + pow(y, 2)) == 1)
      return(1);
     else if  ((x >= 0) && (y <= 0) && ((pow(x, 2) + pow(y, 2)) == 1))
      return(1);
     else 
      return(0);
}