#include "main.h"

/**
 * slen - calculate length of string
 * @s: string
 * Return: integer
 */

int slen(char *s)
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
	int ln = slen(s), i;

	for (i = 0; i < ln; i++)
	{
		_putchar(*(s + ln));
		ln--;
	}
}
