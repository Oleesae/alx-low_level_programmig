#include "main.h"

/**
 * malloc_checked - checks for valid malloc pointer
 * @b: number of bytes
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	else
		return (ptr);
	free(ptr);
}
