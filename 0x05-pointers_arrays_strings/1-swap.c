#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *b, q = *a; /* assign values to variables */

	*a = p; /* swap *a for value of *b */
	*b= q; /* swap *b for value of *a */
}
