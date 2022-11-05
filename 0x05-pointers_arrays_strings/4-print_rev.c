#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int ln = _strlen(s);

	while (ln >= 0)
	{
		_putchar(s[ln]);
		ln--;
	}
	_putchar('\n');
}
