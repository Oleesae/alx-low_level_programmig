#include "main.h"

/**
 * puts2 - prints every 2 characters of a string
 * starting from the first
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0; /* index counter */

	/* print every other character of the string */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	
	_putchar('\n');
}
