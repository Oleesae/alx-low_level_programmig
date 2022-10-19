#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints and returns last digit to be checked
 *
 * @d: number
 *
 * Return: the last digit of @d
 */

int print_last_digit(int d)
{
	int ld = abs(d % 10);

	_putchar('0' + ld);
	return (ld);
}
