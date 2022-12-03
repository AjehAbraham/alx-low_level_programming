#include "main.h"

/**
*_abs-prints the value of number.
*@a: represent the number.
*Return:returns the abs value.
*/
int _abs(int a)
{
int k = a;
int absvalue;
if (k < 0)
{
k = k * (-1);
}
absvalue = k;
return (absvalue);
}
