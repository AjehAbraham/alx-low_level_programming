#include "main.h"
/**
* print_line - check code
* @n: use to check and draw square if condition is true
* Return:0 alwyas(success)
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n')
}
else
{
for (i = 1; i <= n; i++)
_putchar('_');
_putchar('\n');
}
}
