#include "main.h"
/**
 * _isdigit - To check if a character is a digit
 * @c: testing character
 * Return: Always 1 if a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
