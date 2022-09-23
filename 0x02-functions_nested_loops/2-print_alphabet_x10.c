#include "main.h"

/**
* print_alphabet_x10 - print entire lowercase alphabets
* followed by new line, ten times
* Return: zero
*/
void print_alphabet_x10(void)
{
	int i = 0, abc;

	while (i < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			++abc;
		}
		_putchar('\n');
		++i;
	}
}
