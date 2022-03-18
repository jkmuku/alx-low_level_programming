#include "main.h"

/**
 * more_numbers - This function prints zero to fourteen 10 times
 *
 * Return: Void
 */
void more_numbers(void)
{
	char i;
	int l;

	for (l = 0; l < 10; l++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i / 10 > 0)
				_putchar(i / 10 + '0');
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
	}
}




