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
	int a = START;

	while (a <= END)
	{
		if (a == TWO || a == FOUR)
		{
			a++;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
