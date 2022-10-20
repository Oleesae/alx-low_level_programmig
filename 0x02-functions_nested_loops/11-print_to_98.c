#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints the number provided until it gets to 98
 *
 * @n: number to be printed first
 *
 * Return: void
 */

void print_to_98(int n)
{
	int len;
	int i;

	if (n > 98)
	{
		len = n - 98;
		i = 0;
		
		while (i < len)
		{
			printf("%d, ", n);
			n--;
		}
		if (i == len)
			printf("%d", n);
	}

	if (n < 98)
	{
		len = 98 - n;
		i = 0;

		while (i < len)
		{
			printf("%d, ", n);
			n++;
		}
		if (i == len)
			printf("%d", n);
	}
}

