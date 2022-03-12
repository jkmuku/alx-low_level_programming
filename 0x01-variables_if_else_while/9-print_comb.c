#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '8')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('9');
	return (0);
}

