#include "main.h"
/**
* more_numbers - check code
* @void:check for the number and print 10 times
* Return:0 always(sucess)
*/
void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
