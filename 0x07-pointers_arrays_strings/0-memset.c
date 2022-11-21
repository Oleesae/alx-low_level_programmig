#include "main.h"

/**
 * _memset -fills the first n bytes of the memory
 * pointed to by s with the constant byte b
 * @n: integer
 * @b: char
 * @s: string pointer
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}
