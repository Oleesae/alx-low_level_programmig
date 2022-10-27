#include "main.h"
#include <stdio.h>

/**
 * main- prints the sum of the multiples of 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	#define RANGE 1024
	int i, sum = 0; /* set variables to hold sum */

	/* loop through the RANGE */
	for (i = 0; i < RANGE; i++)
	{
		if ((i % 3) == 0) /* check if multiple of 3 */
		{
			sum += i; /* add number to sum */
		}
		else if ((i % 5) == 0) /* check if multiple of 5 */
		{
			sum += i; /* add number to sum */
		}
	}
	/* print the result, sum */
	printf("%d\n", sum);
	return (0);
}
