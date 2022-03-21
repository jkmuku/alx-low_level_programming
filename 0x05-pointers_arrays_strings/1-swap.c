#include "main.h"

/**
 * swap_int - Code to swap values of variables
 * @a: first variable
 * @b: second variable
*/
void swap_int(int *a, int *b)
{
	int exc;

	exc = *a;
	*a = *b;
	*b = exc;
}
