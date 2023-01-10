#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int lname, lowner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}
	for (lname = 0; name[lname]; lname++)
		continue;
	for (lowner = 0; owner[lowner]; lowner++)
		continue;
	new_dog->name = malloc(lname);
	new_dog->owner = malloc(lowner);
	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
	}
	for (i = 0; i < lname; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	
	new_dog->age = age;

	for (i = 0; i < lowner; i++)
		new_dog->owner[i] = owner[i];	
	new_dog->owner[i] = '\0';

	return (new_dog);
}
