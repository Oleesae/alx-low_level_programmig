#include "main.h"
#include <stdlib.h>

/**
 * times_table - prints the nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;

			if (m / 10)
				_putchar('0' + (m / 10));
			else if (j != 0)
				_putchar(' ');

			_putchar(48 + (m % 10));

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
