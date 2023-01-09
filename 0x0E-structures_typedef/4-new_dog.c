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
	char *nname = name;
	char *nowner = owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
