#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion_(s + 1);
	}
	else
		putchar('\n');
}
