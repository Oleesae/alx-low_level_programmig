#include "main.h"

/**
 * print_alphabetx10 - prints all lowercase alphabets 10 times
 * Return: void
 */


void print_alphabetx10(void)
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
	}
	_putchar('\n');
}
