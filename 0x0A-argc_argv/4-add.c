#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */

int main(int argc, char *argv[])
{
	int val = 0;

	if (argc > 2 && argc < 4)
	{
		val += atoi(argv[1]);
		val += atoi(argv[2]);
		printf("%d\n", val);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
