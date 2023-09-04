#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - calculates the change of a given number
 * @argc: number of arguments given
 * @argv: array of arguments given
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5,  2, 1};
	int i, val, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = 0;
	n = atoi(argv[1]);
	if (n < 1)
	{
		printf("%d\n", val);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= coins[i])
			{
				val += n / coins[i];
				n = n % coins[i];
			}
		}
		printf("%d\n", val);
	}
	return (0);
}
