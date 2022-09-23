#include "main.h"

/**
* _islower - checks whether a character belongs,
* to the lowercase character class.
* Return: zero
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
