#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers less than four million
 *
 * Return: Always 0
 */

int main(void)
{
	int f1 = 1; /* first number */
	int f2 = 2; /* second number */
	long int f3; /* next number */
	unsigned long int sum = 0; /* total of numbers */
	int i; /* loop iterator */

	/* iterate to print through the rest */
	for (i = 2; i < 35; i++)
	{
		if (f2 % 2 == 0)
			sum += f2;

		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}

	printf("%lu\n", sum);
	return (0);
}
