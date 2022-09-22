#include <stdio.h>

/**
* main - entry point
* description: this program prints the alphabet in lowercase using putchar
* except letters q and e
* Return: zero
*/
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
		else
			c++;
	}
	putchar('\n');
	return (0);
}
