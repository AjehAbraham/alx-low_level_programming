#include "main.h"
/**
* swap_int - use to check two parameter to point
* @a: first parameter in fucntion
* @b:second parameter in function
* Return:0 always(success)
*/
void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
