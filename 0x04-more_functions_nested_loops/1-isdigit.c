#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 * @c: parameter passed in
 * Return: 1 if true and 0 if otherwise
 */

int _isdigit(int c)
{
	int dig = c;

	if (dig < 48 || dig > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
