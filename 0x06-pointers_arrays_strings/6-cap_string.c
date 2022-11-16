#include "main.h"

/**
 * cap_string - capitalize every letter after a word separator
 * @str: string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	/* string of a word separators */
	char *seps = ",;.!?\"(){} \t\n";
	int i, s;

	/* loop through every character of string */
	for (i = 0; str[i]; i++)
	{
		/**
		 * make first character uppercase
		 */
		if (i == 0)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				continue;
			}
		}

		/**
		 * if last character was one of the separators
		 * make the current character uppercase
		 */
		for (s = 0; seps[s]; s++)
		{
			if (str[i - 1] == seps[s])
			{
				if (str[i] > 96 && str[i] < 123)
				{
					str[i] -= 32;
					break;
				}
			}
		}
	}
	return (str);
}
