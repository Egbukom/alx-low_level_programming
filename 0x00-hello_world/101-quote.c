#include <stdio.h>
#include <unistd.h> 

/**
* main - entry point
* Return: zero
*/

int main(void)
{
	write(2,"\"and that piece of art is useful\" - Dora Korpar, 2015-10-19", 61);
	return (0);
}