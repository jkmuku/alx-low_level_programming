#include "main.h"

/**
 * print_diagonal - Function to print n number of diagonals
 *@n: input number
 */
void print_diagonal(int n)
{
	int space = n;
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
