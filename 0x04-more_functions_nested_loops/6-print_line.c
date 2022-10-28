#include "main.h"

/**
 * print_line - prints a line
 * @n: the number of times the line is to be printed
 * Return: void
 */

void print_line(int n)
{
	int val = n; /* set n in a variable val */

	while (val > 0) /* val should always be greater than 0 to do this */
	{
		_putchar('_'); /* print a line while the conditon is true */
		val--; /* decrement val till the condition fails */
	}
	_putchar('\n'); /* print a new line if condition fails */
}
