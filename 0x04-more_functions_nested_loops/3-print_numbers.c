#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	#define START 48
	#define END 57

	int i = START;

	while (i < (END + 1))
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
