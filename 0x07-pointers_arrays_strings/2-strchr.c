#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence
 * of the character c int the string s or NULL if the
 * character is not found
 * @s: string
 * @c: char
 * Return: pointer to s at location of c
 */

char *_strchr(char *s, char c)
{
	int len, i;

	for (len = 0; s[len]; len++)
		continue;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
