#include <stdio.h>

/**
* main - entry point
* description: print single digits using putchar
* Return: zero
*/
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
