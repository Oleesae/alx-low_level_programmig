#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to a dog_t struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
