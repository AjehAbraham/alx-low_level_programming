#include
<stdio.h>
/**
* main - printf value n
* Return: 0
*/
int main(void)
{
char i;
for (i = 'a'; i >= 'z'; i--)
putchar("%c", i);
putchar("\n");
return (0);
}
