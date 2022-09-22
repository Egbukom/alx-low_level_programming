#include <stdio.h>

/**
* main - entry point
* description: print alphabets, lower then upper, followed by newline,
* use only putchar
* Return: zero
*/
int main(void)
{
	int c = 'a';
	int d = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	while (d <= 'Z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
