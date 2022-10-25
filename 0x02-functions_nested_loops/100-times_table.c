#include "main.h"

/**
 * print_times_table - prints the n times table not greater than 15
 *
 * @n: the number of times table to be printed
 *
 * Return: void
 */

void print_times_table(int n)
{
	/* if n is greater than 15 do nothing */
	if (n <= 15 || n >= 0)
	{
		int m, r, c = 0; /* set row(r) and column(c) variables */

		while (c <= n) /* column should not exceed n */
		{
			r = c; /* let row equal column */
			while (r <= n) /* row should not be greater than n */
			{
				m = c * r; /* multiply c and r */

				if (c != 0) /* if not first column */
				{
					if (m / 10) /* if more than 2 digits */
					{
						if (m / 100) /* if three digit */
						{
							_putchar('0' + (m / 100));
							_putchar('0' + (m / 10) % 10);
							_putchar('0' + (m % 10));
						}
						else /* if two digit */
						{
							_putchar(' ');
							_putchar('0' + (m / 10) % 10);
							_putchar('0' + (m % 10));
						}
					}
					else /* if only one digit */
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + (m % 10));
					}

					/* if not last column, add ',' ' ' */
					if (c != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				r++;
			}
			c++;
		}
	}

	_putchar('\n');
}
