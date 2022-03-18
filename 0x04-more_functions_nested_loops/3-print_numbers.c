#include "main.h"

/**
 * print_numbers - Function to print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
