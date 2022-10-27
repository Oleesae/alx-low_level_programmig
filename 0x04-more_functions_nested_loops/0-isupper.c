#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: character to be checked
 * Return: 1 if successful and 0 if otherwise
 */

int _isupper(int c)
{
	int val = c;

	if (val < 'A' || val > 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
