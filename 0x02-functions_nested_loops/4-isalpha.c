#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphanumeric values
 *
 * @c: value to be checked
 *
 * Return: 1 if true or 0 if false
 */

int _isalpha(int c)
{
	int al = c;

	if (isalpha(al))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
