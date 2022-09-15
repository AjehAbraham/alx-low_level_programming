#include "main.h"
/**
* print_most_numbers - check the code 
* void: use to check value of code
* Return:0 always(success)
*/
void print_most_numbers(void)
{
	int b;
	for (b = 48; b <= 57; b++)
	{
		if (b != 50 && b != 52)
			_putchar(b);
	}
	_putchat('\n');
}
