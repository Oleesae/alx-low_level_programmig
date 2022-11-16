#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase in a string
 * @str: string
 *
 * Return: character
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* check if lowercase */
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32; /* change to uppercase */
		}
		i++;
	}
	return (str);
}
