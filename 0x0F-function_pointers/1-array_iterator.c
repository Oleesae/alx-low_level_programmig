#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @action: pointer to a function
 * @size: size of the array
 * @array: array to be iterated
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		exit(EXIT_FAILURE);
	if (array == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
		action(array[i]);
}
