#include "main.h"
/**
* _puts - a function that print a string follow by a newline
* @str: parameter use in fucntion to check code
* Return:0 always(success)
*/
void _puts(char *str)
{
	int numb = 0;
	
	while (numb <= 0)
	{
		if (str[numb] == '\0')
		{
			_putchar('\n');
		break;
	}
	_putchar = (str[numb]);
	numb++
	}
}
