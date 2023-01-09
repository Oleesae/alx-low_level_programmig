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

	new_dog = malloc(sizeof(dog_t));
	new_dog->owner = malloc(sizeof(dog_t->owner));
	new_dog->name = malloc(sizeof(dog_t->name));
	if (new_dog == NULL || new_dog->owner == NULL || new_dog->name == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
