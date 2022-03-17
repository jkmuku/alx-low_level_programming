#include "main.h"

/**
 * _abs - This function checks for absolute value of a number
 *
 * @n: This is the testing variable
 *
 * Return:absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
		return (-n);

	return (0);
}
