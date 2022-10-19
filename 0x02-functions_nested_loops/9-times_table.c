#include "main.h"
#include <stdlib.h>

/**
 * times_table - prints the nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			_putchar(m);
		}
		_putchar('\n');
	}
}
