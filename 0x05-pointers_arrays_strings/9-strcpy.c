#include "main.h"

/**
 * _strcpy - copies a string from src to dest and returns the pointer to dest
 * @dest: string
 * @src: string
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	/* find length of the src string */
	for (len = 0; src[len] != '\0'; len++)
		continue;

	/* assign values of src to dest */
	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
