#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int ln; /* length counter */

	/* get the length of *s */
	for (ln = 0; s[ln] != '\0\; ln++)
		continue; /* do nothing */
	/* ln equals index of \0 */
	ln -= 1;
	/* ln equals last index */
	while (ln >= 0)
	{
		_putchar(s[ln]);
		ln--;
	}
	_putchar('\n');
}
