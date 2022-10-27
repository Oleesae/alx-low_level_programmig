#include "main.h"
#include <stdio.h>

/**
 * sum_multiples - prints the sum of the multiples of 3 and 5
 * @n: range of numbers to search for multiples excluding n.
 * Return: void
 */

void sum_multiples(int n)
{
	#define RANGE n
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
}
