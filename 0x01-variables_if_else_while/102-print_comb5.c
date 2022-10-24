#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

/* A program that prints two combination of double digits n1 n2, 00 00 */
int main(void)
{
	/* variables for two combinations */
	int n1, n2;

	/* set first combination */
	n1 = 0;
	/* checks if the first combination is lesser than 99 */
	while (n1 <= 99)
	{
		/* sets second combination to be equal to first combination */
		n2 = n1;

		/* checks if the second combination is lesser than 99 */
		while (n2 <= 99)
		{
			/* if unequal i.e if n1 is 8 and n2 is 8, don't print*/
			if (n2 != n1)
			{
				/* prints first number of n1 */
				putchar((n1 / 10) + '0');
				/* prints the last number of n1 */
				putchar((n1 % 10) + '0');
				/* prints a space */
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');

				/* last digits that pass the tests */
				if (n1 != 98 || n2 != 99)
				{
					putchar(','); /* prints a comma */
					putchar(' ');
				}
			}
			n2++; /* increase n2 by 1 */
		}
		n1++; /* increase n1 by 1 */
	}
	putchar('\n'); /* print a newline character */

	return (0); /* retuns 0, nul */
}

