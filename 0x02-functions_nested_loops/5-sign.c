# include "main.h"
/**
* print_sign-check the sign of a number.
* @n:value to be checeked
* Return:1-if n true else return 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar ('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
