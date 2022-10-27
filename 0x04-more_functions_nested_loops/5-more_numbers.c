#include "main.h"

/**
 * more_numbers - prints numbers 0-14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int r, c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

