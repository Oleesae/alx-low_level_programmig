#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a squaure matrix
 * @a: 2d array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, fd = 0, sd = 0;

	if (a == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				fd += a;
			if (j == ((size - 1) - i))
				sd += a;
		}
	}

	printf("%d, %d", fd, sd);
}
