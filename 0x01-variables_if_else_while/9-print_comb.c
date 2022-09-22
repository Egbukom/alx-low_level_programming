#include <stdio.h>

/**
* main - entry
* description: list single digits, separate with space
* Return: zero
*/
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
