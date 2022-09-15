#inlude "main.h"
/**
* more_numbers - check code
* @void:check for the number and print 10 times
* Return:0 always(sucess)
*/
void more_numbers(void)

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}

