#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main.c - calculates the change of a given number
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
		return(1);
	}

	if (*argv == NULL)
		return(0);

	val = 0;
	n = atoi(argv[1]);
	if (n < 1)
		printf("%d", 0);

	for (i = 0; i < 5; i++)
	{
		if (n >= coins[i])
		{
			val += n / coins[i];
			printf("Dividing %d by %d\n", n, coins[i]);
			n = n % coins[i];
		}
	}
	printf("%d\n", val);
}
