#include <stdio.h>

/**
* main - entry point
* description: here i'll print the alphabets in reverse
* using putchar
* Return: zero
*/
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar('\n');
	return (0);
}
