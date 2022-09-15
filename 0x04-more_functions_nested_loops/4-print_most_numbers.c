#include "main.h"
/**
* print_most_numbers - check code
* @void:check  and print numbwe 0-9 except 2 ans 4
* Return:0 always (success)
*/
void print_most_numbers(void)
{
	 int x;

for (x = 48; x <= 57; x++)
{
if (x != 50 && x != 52)
_putchar(x);
}
_putchar('\n');
}
