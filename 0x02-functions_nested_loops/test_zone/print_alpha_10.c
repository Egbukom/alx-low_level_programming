#include <stdio.h>
/**
* main - entry
* prints alphabet 10 times
* Return: zer0
*/
int main(void)
{
	int i = 0, abc;

	while (i < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			putchar(abc);
			++abc;
		}
		putchar('\n');
		++i;
	}
	return (0);
}
