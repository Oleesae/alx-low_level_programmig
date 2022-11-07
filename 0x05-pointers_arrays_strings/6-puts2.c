#include "main.h"

/**
 * puts2 - prints every 2 characters of a string
 * starting from the first
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, len; /* index counter */

	for (len = 0; str[len] != '\0'; len++)
		continue;

	/* print every other character of the string */
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
