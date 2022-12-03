#include "main.h"
/**
* _strlen - check code to retrun length of a function
* @s:use as parameter in function to print.check code
* Return:0(success) always
*/
int _strlen(char *s)
{

int q = 0;

	while (*(s + q) != 0)
	{
		q++;
	}
	return (q);

}
