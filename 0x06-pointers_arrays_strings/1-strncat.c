#include "main.h"

/**
 * _len - length of a string
 * @s: string
 * Return: integer
 */

int _len(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
		continue;
	return (len);
}

/**
 * _strncat - joins n bytes of src to dest
 * @dest: string
 * @src: string
 * @n: integer
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, ls, ld;

	ld = _len(dest);
	ls = _len(src);

	j = 0;
	if (n < ls)
	{
		while (src[j] != '\0')
		{
			dest[ld] = src[j];
			j++;
			ld++;
		}
		dest[ld] = '\0';
	}
	else
	{
		/* append n bytes of src to dest */
		while (j < n)
		{
			dest[ld] = src[j];
			j++;
			ld++;
		}
	}
	return (dest);
}
