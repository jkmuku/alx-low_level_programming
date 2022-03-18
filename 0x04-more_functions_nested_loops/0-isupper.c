#include "main.h"

/**
 * _isupper - This function checks if the an alphabet is upper case
 *@c: testing character
 * Return: Always 1 success or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
