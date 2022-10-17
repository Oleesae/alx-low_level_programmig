#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	do {
		putchar(n);
		if (n < '9')
		{
			putchar(44);
			putchar(32);
		}
		n++;
	} while (n <= '9');

	putchar(10);

	return (0);
}
