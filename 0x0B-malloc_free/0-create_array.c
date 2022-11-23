#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters (c)
 * with an array size of (size)
 * @size: the size of the array to be created
 * @c: the character in the array
 *
 * Return: a pointer to the array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array; /* array pointer */
	unsigned int i = 0; /* index variable */

	/* dynamically allocate size to array pointer */
	array = malloc(size * sizeof(char));

	/* check if size is equal to 0 - base case */
	if (size > 0)
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	if (size <= 0)
		return (NULL);

	return (array);
}
