#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char b;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	b = 'a';
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
