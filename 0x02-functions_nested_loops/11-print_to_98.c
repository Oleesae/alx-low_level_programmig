#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints the number n to 98
 *
 * @n: number to be printed first
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 0 && n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}

		if (n == 98)
			printf("%d", n);
	}
	else if (n > 0 &&  n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}

		if (n == 98)
			printf("%d", n);
	}
	else if (n <= 0)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}

		if (n == 98)
			printf("%d", n);
	}
	else
		printf("%d", n);

	printf("\n");
}
