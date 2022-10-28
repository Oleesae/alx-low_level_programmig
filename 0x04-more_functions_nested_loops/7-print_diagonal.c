#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times the line is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int val = n, c, r; /* set n in a variable val */

	if (val > 0) /* val should always be greater than 0 to do this */
	{
		for (r = 0; r < val; r++) /* set row to never exceed val */
		{
			c = 0; /* initiate column */
			while (c != r) /* print ' ' if column does not equal row */
			{
				_putchar(' ');
				c++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n'); /* print a new line if condition fails */
	}
}
