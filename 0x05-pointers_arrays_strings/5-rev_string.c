#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len; /* length */
	char c; /* temp character holder */
	int lind; /* index from the left/beginning */
	int rind; /* index from the right/end */

	/* counts each char value in the string until NULL */
	for (len = 0; s[len] != '\0'; len++)
		continue; /* do nothing */

	 lind = 0; /* first index of string */
	 rind = len - 1; /* last index of string */

	/**
	 * rind always greater than lind
	 * save the value of lind in temp holder,
	 * swap the two ends till they meet at the middle
	 */
	while (rind >= lind)
	{
		c = s[lind];
		s[lind] = s[rind];
		s[rind] = c;

		lind++;
		rind--;
	}
}
