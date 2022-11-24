#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string whild
 * is a duplicate of the string (str)
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string or NULL
 */

char *_strdup(char *str)
{
	char *dup; /* duplicate string */
	int i = 0; /* index number */

	/* check if str is NULL, return NULL and exit program */
	if (str == NULL)
		return (NULL);
	/* allocate size of dup with malloc */
	dup = malloc(strlen(str) + 1);

	/* check if dup returns NULL if yes exit program, return NULL */
	if (dup == NULL)
		return (NULL);

	/* duplicate str into dup */

	if (str != NULL)
	{
		while (str[i])
		{
			dup[i] = str[i];
			i++;
		}
		dup[i] = '\0'; /* end dup with NULL byte */
		return (dup); /* return pointer of dup */
		free(dup); /* free memory space allocated to dup */
	}
	return (0);
}
