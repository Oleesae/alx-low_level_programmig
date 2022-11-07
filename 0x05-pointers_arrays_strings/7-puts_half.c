#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int n, i;

	/* length of string */
	for (i = 0; str[i] != '\0'; i++)
		continue;

	/* get half of string */
	if ((i % 2) != 0) /* if length of string is odd */
		n = (i - 1) / 2;
	else
		n = i / 2;

	/* print from middle of string to the end */
	while (n < i) 
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
