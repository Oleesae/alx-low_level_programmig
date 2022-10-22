#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	#define START 0
	#define END 10
	#define LIMIT 8

	for (i = START; i < END; i++)
	{
		for (j = START; j < END; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar('0' + (i % 10));
					putchar('0' + (j % 10));
					putchar('0' + (k % 10));

					if (i != LIMIT - 1)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
