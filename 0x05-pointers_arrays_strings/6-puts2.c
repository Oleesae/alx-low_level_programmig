#include "main.h"

/**
 * puts2 - prints every 2 characters of a string
 * starting from the first
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i; /* index counter */

	/* print every other character of the string */
	for (i = 0; str[i] != '\0'; i+2)
		_putchar(str[i]);

	_putchar('\n');
}
