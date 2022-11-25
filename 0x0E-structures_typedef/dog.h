#ifndef __DOG_H__
#define __DOG_H__

#include <stdlib.h>

/**
 * struct dog - a dog struct
 * @name: name of dog, char *
 * @age: age of dog, float
 * @owner: owner of dog, char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* __DOG_H__ */
