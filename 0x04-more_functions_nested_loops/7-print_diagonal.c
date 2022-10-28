#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times the line is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int val = n, i; /* set n in a variable val */

	while (val > 0) /* val should always be greater than 0 to do this */
	{
		i = 1;
		while (i == val)
		{
			_putchar('\\'); /* print a line while i == val */
			_putchar('\n');
			i++;
		}
		_putchar(' ');

		val--; /* decrement val till the condition fails */
	}
	_putchar('\n'); /* print a new line if condition fails */
}
