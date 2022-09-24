#include <stdio.h>

/**
* main - entry
* Return: zero
*/
int main(void)
{
	int c = 'B';

	if (c >= 'a' && c <= 'z')
		printf("Lower case\n");
	else
		printf("Not lower case\n");
}
