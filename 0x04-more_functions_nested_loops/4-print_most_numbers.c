#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	#define START 48
	#define END 57
	#define TWO 50
	#define FOUR 52

	int i = START;

	while (i < (END + 1))
	{
		if (i != TWO || i != FOUR)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
