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
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
