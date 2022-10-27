#include "main.h"

/**
 * print_line - prints a line
 * @n: the number of times the line is to be printed
 * Return: void
 */

void print_line(int n)
{
	while (n <= 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
