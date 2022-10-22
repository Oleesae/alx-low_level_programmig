#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	#define START 0
	#define END 10
	#define LIMIT 9

	for (i = START; i < END; i++)
	{
		for (j = START; j < END; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + (i % 10));
				putchar('0' + (j % 10));

				if (i != LIMIT - 1)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
