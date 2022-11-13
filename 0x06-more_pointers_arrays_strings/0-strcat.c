#include <stdio.h>

/**
 * _strcat - joins two strings
 * @dest: string
 * @src: string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int j, len, i;
	char *new;

	/* length of dest */
	for (len = 0; dest[len] != '\0'; len++)
		continue;

	new = dest;
	j = 0;
	i = len;
	/* assign src to dest through new */
	while (src[j] != '\0')
	{
		new[i] = src[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (dest);
}
