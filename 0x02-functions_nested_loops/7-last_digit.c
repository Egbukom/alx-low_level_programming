#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: integer variable
* Return: zero
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
