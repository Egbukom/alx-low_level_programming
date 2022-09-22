#include <stdio.h>

/**
* main - entry point
* description: this program prints the alphabet in lowercase using putchar
* Return: zero
*/
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
