#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int ln = _strlen(s);

	while (ln > 0)
	{
		_putchar(*(s + ln));
		ln--;
	}
	_putchar('\n');
}
