#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets 10 times
 * Return: void
 */


void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int p = 'a';

		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}

		i++;
		_putchar('\n');
	}
}
