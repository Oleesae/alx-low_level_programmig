#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int val = 1, i = 0;

	if (!isdigit(argv[i]))
	{
		printf("Error\n");
		return (1);
	}

	while (argv[i])
	{
		val += atoi(argv[i]);
		i++;
	}
	return (0);
}
