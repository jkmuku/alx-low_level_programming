#include "main.h"

/**
 * print_alphabet_x10 - This function prints the alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char ten;

	for (i = 0; i <= 9; i++)
	{
		ten = 'a';

		while (ten <= 'z')
		{
			_putchar(ten);
			ten++;
		}
		_putchar('\n');
	}
}
