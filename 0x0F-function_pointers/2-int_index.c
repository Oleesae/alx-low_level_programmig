#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for
 * which the cmp function executes
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare
 * values
 * @array: array to be compared
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		exit(EXIT_FAILURE);
	if (cmp == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			check += 1;
		if (check > 0)
			return (i);
	}
	if (check == 0)
		return (-1);
	return (0);
}
