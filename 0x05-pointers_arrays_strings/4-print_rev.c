#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 0)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
