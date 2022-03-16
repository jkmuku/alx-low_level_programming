#include "main.h"

/**
 * _islower - This function checks if the a letter is lowercase
 *
 *@c: This is the testing variable
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
