#include <stdio.h>

/**
* main - entry point
* description - print the hexadecimals. that is;
* print 0 - 9, then a - f (chuckles)
* Return: zero
*/
int main(void)
{
	int d, l;

	d = '0';
	l = 'a';
	while (d <= '9')
	{
		putchar(d);
		++d;
	}
	while (l <= 'f')
	{
		putchar(l);
		++l;
	}
	putchar('\n');
	return (0);
}
