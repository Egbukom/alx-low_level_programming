/**
* _isalpha - checks for alphabeticism
* @c: character variable
* Return: one or zero
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
