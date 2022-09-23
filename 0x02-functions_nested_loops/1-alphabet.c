#include "main.h"

/**
* print_alphabet - this function prints the alphabet in lowercase,
* followed by a newline
* Return: zero
*/
void print_alphabet(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		++abc;
	}
	_putchar('\n');
}
