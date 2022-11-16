#include "main.h"

/**
 * leet - encode a string onto 1337
 * @str: the string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	/**
	 * create two strings with the same length
	 * a char in one would map to a char in another
	 * ie. set[i] => set2[i]
	 */
	char *set1 = "aeotlAEOTL";
	char *set2 = "4307143071";
	int i, s;

	/* iterate through each character in the string */
	for (i = 0; str[i]; i++)
	{
		/**
		 * iterate through every char in set1
		 * if that char is the current char in str
		 * replace it with the char at the position
		 * in set2
		 */

		for (s = 0; set1[s]; i++)
		{
			if (set1[s] == str[i])
			{
				str[i] = set2[s];
				break;
			}
		}
	}
	return (str);
}
