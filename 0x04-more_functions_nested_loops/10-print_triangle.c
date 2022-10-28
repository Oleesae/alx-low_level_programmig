#include "main.h"

/**
 * print_triangle - prints a triangle of given size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int r, c, cal;

	#define N size
	#define LIM 1
	/*check if size is a valid number '> 0' */
	if (N > 0)
	{
		/* check rows */
		for (r = 0; r < N; r++)
		{
			/* check for columns */
			for (c = 0; c < N; c++)
			{
				cal = N - (r + c);
				/* checks for when to print # */
				if (cal > LIM)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n'); /* prints new line if invalid number '<= 0' */
	}
}
