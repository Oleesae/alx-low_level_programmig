#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	unsigned int val;
	int i, c;

	for (i = 1; argv[i]; i++)
	{
		for (c = 0; argv[i][c]; c++)
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
				return (1);
			}
		val += atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
