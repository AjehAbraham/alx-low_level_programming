#include "main.h"
/**
* _isupper -check the code
* @c:input character
* Return:0 always(success)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
