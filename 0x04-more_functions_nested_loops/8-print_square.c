#include "main.h"

/**
 * print_square - Function to print square
 * @size: input variable
 */
void print_square(int size)
{
	int line = 0;
	int hash;

	if (size > 0)
	{
		while (line < size)
		{
			for (hash = 0; hash < size; hash++)
				_putchar('#');
			_putchar('\n');
			line++;
		}
	}
	else
		_putchar('\n');
}
