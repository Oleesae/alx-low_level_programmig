#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s !- '\0')
	{
		len++;
		s = s + 1;
	}
	return (len);
}
