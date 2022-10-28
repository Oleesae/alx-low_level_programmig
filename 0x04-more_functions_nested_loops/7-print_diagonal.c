#include "main.h"
#include <stdio.h>

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
			c = 0;
			while (c != r)
			{
				putchar(' ');
				c++;
			}
			putchar('\\');
			putchar('\n');
		}
	}
	_putchar('\n'); /* print a new line if condition fails */
}
