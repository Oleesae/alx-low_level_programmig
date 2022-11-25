#ifndef __DOG_H__
#define __DOG_H__

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - a dog struct
 * @name: name of dog, char *
 * @age: age of dog, float
 * @owner: owner of dog, char *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* __DOG_H__ */
