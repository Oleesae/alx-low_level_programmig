#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	/* initiate and iterate to print 1 to 100 */
	for (c = 1; c <= 100; c++)
	{
		/* check if number is a multiple of 3 & 5 */
		if ((c % 3) == 0 && (c % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (!(c % 3)) /* check for multiple of 3 */
		{
			printf("Fizz");
		}
		else if (!(c % 5)) /* check for multiple of 5 */
		{
			printf("Buzz");
		}
		else /* print others */
		{
			printf("%d", c);
		}

		/* put commas and spaces if not last number */
		if (c != 100)
		{
			printf(" ");
		}
		else
		{
			printf('\n');
		}
	}

	return (0);
}
