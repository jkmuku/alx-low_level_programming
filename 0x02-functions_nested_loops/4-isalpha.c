#include "main.h"

/**
 * _isalpha - This function checks if the a letter is lowercase
 *
 *@c: This is the testing variable
 * Return: 1 if lower, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
