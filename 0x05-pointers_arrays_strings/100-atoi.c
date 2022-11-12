#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int i; /* holds the final integer */
	short int sg = 1; /* check for signs */
	char *p = ""; /* hold the number values as strings */

	while (*s != '\0') /* check till the end of the string */
	{
		/* check for signs */
		if (*s == '-')
			sg *= -1;
		else if (*s == '+')
			sg *= +1;
		else if (isdigit(*s))
		{
			p = s;
			break;
		}
		s += 1;
	}

	i = atoi(p);
	if (i == 0)
		retirn (0);

	return (i * sg);
}
