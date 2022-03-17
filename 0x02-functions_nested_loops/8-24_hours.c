#include "main.h"

/**
 * jack_bauer - This function prints every time of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;
	min = 0;
	while (hour < 24)
	{
		while  (min < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hour++;
	}
}
