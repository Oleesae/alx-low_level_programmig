#include "main.h"
#include <stdio.h>

/**
 * print_array - print n number of an array
 * @a: array
 * @n: number of items in an array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0, len;

	/* check for the length of the array */
	for (len = 0; a[len] != '\0'; len++)
		continue;

	/* check if number of elements to print is within array length */
	if (n <= len)
	{
		/* print n number of elements */
		while (i < n)
		{
			printf("%d", a[i]);

			/* put a comma and space after each element unless last */
			if (i != (n - 1))
				printf(", ");
			i++;
		}
	}
	printf("\n");
}
