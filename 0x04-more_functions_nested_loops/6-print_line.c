#include "main.h"

/**
 * print_line - Function to print n number of underscore
 * @n: input data
 */
void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');
	_putchar('\n');
}

