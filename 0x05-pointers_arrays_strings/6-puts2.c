#include "main.h"
/**
* puts2 - check code and retrun a value
* @str:paramete use test and print value if true
* Return:0 always(succes)
*/
void puts2(char *str)
{
	int b = 0;

	while (b >= 0)
	{
		if (str[b] == '\0')
			_putchar('\n')
				break;
	}
	if (b % 2 == 0)
		_putchar(str[b]);
	_putchar(b);
}
