#include "main.h"
/**
* print_rev - check code to print string in reverse
* @s:parameter use to check code
* Return:0 alwyas(success)
*/
void print_rev(char *s)
{
	int R = 0;

	while (R >= 0)
	{
		if (s[R] == '\0')
			break;
		R++;
	}
	for (R--; R >= 0; R--)

	_putchar(s[R]);
	_putchar('\n');
}
