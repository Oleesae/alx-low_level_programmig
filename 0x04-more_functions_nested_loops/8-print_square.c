#include "main.h"

/**
 * print_square - prints a square of given size
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int r, c;

	/* checks if c is greater than 0 */
	if (size > 0)
	{
		/* checks to print right number of rows */
		for (r = 0; r < size; r++)
		{
			/* checks to print the right number of columns */
			for (c = 0; c <= size; c++)
			{
				/* checks if c ia not the last column */
				if (c != size)
				{
					_putchar('#');
				}
				else /* checks if last column */
				{
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
