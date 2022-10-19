#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - prints the 24 hour clock
 *
 * Return: void
 */

void jack_bauer(void)
{
	int min, hour, m;

	for (min = 0; min < (60 * 24); min++)
	{
		hour = mins / 60;
		min = mins % 60;
		_putchar(48 + (hour / 10));
		_putchar(48 + (hour % 10));
		_putchar(':');
		_putchar(48 + (m / 10));
		_putchar(48 + (m % 10));
		_putchar('\n');
	}
}
