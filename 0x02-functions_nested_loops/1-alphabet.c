#include "main.h"

/**
 * print_alphabet -prints all lowercase alphabets
 * Return: void
 */


void print_alphabet(void)
{
	int p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
