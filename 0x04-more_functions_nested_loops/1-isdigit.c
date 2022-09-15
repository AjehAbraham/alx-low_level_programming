#include "main.h"
/**
* _isdigit - check the code
* @c:check the value of the code to be executed
* Return:1 if true else return 0 (success) always
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
