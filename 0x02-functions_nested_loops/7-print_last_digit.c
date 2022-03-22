#include "main.h"

/**
 * print_last_digit - This function print last digit of a number
 *
 * @n: This is the testing variable
 *
 * Return:absolute value
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -1 * (n % 10);
	}
	else
		k = n % 10;

	_putchar('0' + (k % 10));
	return (k % 10);
}
