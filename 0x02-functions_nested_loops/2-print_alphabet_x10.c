#include "main.h"

/**
 * main - This function prints the alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ten;
	int i;

	ten = 'a';
	i = 0;

	while (i <= 9)
	{
		(while ten <= 'z')
		{
			_putchar(ten);
			ten++;
		}
		_putchar('\n');
		i++;
	}
}
