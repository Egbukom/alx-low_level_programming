/**
* _islower - checks whether a character belongs,
* to the lowercase character class.
* @c: integer variable
* Return: zero
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
