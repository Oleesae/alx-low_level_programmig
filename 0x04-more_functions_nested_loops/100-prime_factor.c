#include <stdlib.h>
#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: Always 0
 */

int main(void)
{
	long int num = 612852475143, pr = 1;

	while (pr <= num) /* increment for prime numbers */
	{
		++pr;
		while (num % pr == 0)
		{
			if (num / pr == 1) /* if last pr */
				printf("%ld\n", pr);
			num /= pr;
		}
	}

	return (0);
}
