#include "main.h"
#include <stdio.h>

/**
 * spaces - prints n number of spaces
 * @n: number of spaces to be printed
 * Return: void
 */

void spaces(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar(' ');
}

/**
 * print_times_table - prints the n times table not greater than 15
 *
 * @n: the number of times table to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int m, r, c; /* set row(r) and column(c) variables */

	if (n <= 15 && n >= 0) /* if n is greater than 15 or less than 0 do nothing */
	{
		for (r = 0; r <= n; r++) /* no of rows should not exceed n */
		{
			for (c = 0; c <= n; c++) /* no of columns should not exceed n */
			{
				m = c * r; /* multiply c and r */
				if (c != 0) /* if not first column */
				{
					if ((m / 10) && (m / 100)) /* if three digit */
					{
						spaces(1);
						_putchar('0' + (m / 100));
						_putchar('0' + (m / 10) % 10);
						_putchar('0' + (m % 10));
					}
					else if ((m / 10) && !(m / 100)) /* if two digit */
					{
						spaces(2);
						_putchar('0' + (m / 10) % 10);
						_putchar('0' + (m % 10));
					}
					else if (!(m / 10)) /* if single digit */
					{
						spaces(3);
						_putchar('0' + (m % 10));
					}
				}
				else
					_putchar('0' + (m % 10));
				if (c != n) /* if not last column, add ',' */
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

