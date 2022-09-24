#include <stdio.h>

/**
* main - entry point
* description: this program prints all possible combinations
* of two single digit numbers
* Return: zero
*/
int main(void)
{
	int a = '0', b;

	while (a <= '8')
	{
		b = '1';
		while (b <= '9')
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || b != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
