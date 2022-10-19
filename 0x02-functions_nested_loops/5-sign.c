#include "main.h"

/**
 * print_sign - Entry
 *
 * @n: compares value with 0
 *
 * Return: returns 1 if > 0, 0 if 0 and -1 if < 0
 */

int print_sign(int n)
{
	int s = n;

	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
