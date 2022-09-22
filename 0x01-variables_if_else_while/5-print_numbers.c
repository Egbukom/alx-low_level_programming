#include <stdio.h>

/**
* main - entry point
* description: this program prints all the single digit numbers
* Return: zero
*/
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}
	putchar('\n');
	return (0);
}
