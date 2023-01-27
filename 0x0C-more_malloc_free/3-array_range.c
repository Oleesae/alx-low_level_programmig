#include "main.h"

/**
 * array_range - creates an array that contains all the
 * values from min (included) to max (included), from
 * min to max in order
 * @min: integer
 * @max: integer
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *n, i;
	int ln;

	if (min > max)
		return (NULL);
	ln = (max - min) + 1;
	n = malloc(ln * sizeof(int));
	if (n == NULL)
		return (NULL);
	for (i = 0; i < ln; i++)
	{
		n[i] = min;
		min++;
	}

	return (n);
}
