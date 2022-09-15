#inlude "main.h"
/**
* more_numbers - check code
* @void:check for the number and print 10 times
* Return:0 always(sucess)
*/
void more_numbers(void)
{
	for (h = 0; h <= 14; h++)
	{
		if (h >= 10)
			_putchar((h / 10) + 48);
				_putchar((h % 10) + 48);
	}
	_putchar('\n');
}
