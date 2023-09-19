#include "3-calc.h"

/**
 * main - returns the result of an operation
 * @argv: an array of arguments
 * @argc: number of arguments given
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
