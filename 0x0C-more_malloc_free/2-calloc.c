#include "main.h"

/**
 * _calloc - allocates nmemb of elements of array size bytes each
 * @nmemb: number of elements to allocate memory
 * @size: size of each elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	/* exit if a null byte is passed */
	if (nmemb < 1 || size < 1)
		return (NULL);

	ptr = malloc(nmemb * size);
	/* exit if ptr returns null */
	if (ptr == NULL)
		return (NULL);
	/* assign 0 to each byte of ptr */
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
	free(ptr);
}
