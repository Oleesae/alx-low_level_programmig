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

	if (min > max)
		return (NULL);
	n = malloc(((max - min) + 1) * sizeof(int));
	if (n == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		n[i] = min;
		min++;
	}
	n[i] = '\0';
	return (n);
	free(n);
}
