#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int f1 = 1, f2 = 2, f3, i; /* 1st and 2nd fibonacci numbers */

	#define LIM 50
	printf("%ld, ", f1); /* print the first number */

	/* iterate to print through the rest */
	for (i = 1; i < LIM; i++)
	{
		printf("%ld", f2);

		/* print a comma and space if not the last number */
		if (i != (LIM - 1))
			printf(", ");

		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
