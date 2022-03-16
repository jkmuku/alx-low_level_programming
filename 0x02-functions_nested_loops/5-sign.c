#include "main.h"

/**
 * print_sign - This function checks for the sign of a number
 *
 *@n: This is the testing variable
 * Return: 1 if n is positive, 0 if n is zero. otherwise return -1
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
