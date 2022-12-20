#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if wrong character or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
	if (*b != '0' && *b != '1')
		return (0);
	res = (res << 1) | (*b++ - '0');
	}
	return (res);
}
