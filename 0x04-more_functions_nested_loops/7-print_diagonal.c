#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times the line is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int val = n, c, r; /* set n in a variable val */

	while (val > 0) /* val should always be greater than 0 to do this */
	{
		for (r = 0; r < val; r++)
		{
			for (c = 0; c < val; c++)
			{
				if (c == r)
				{
					_putchar('\\');
					_putchar('\n');
				}
				_putchar(' ');
			}
		}
	}
	_putchar('\n'); /* print a new line if condition fails */
}
