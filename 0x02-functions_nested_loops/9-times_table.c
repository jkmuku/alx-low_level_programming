#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description - same as above
 */

void times_table(void)
{
	int mult;
	int num;
	int prod;

	for (mult = 0; mult < 10; mult++)
	{
		for (num = 0 ; num < 10; num++)
		{
			prod = (num * mult);
			if (num == 0)
			{
				_putchar('0' + prod);
			}
			else if  (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
