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

	while (n <= '9')
	{
		if (n == '9')
		{
			putchar(n);
			n++;
		}
		else
		{
			putchar(n);
			putchar(44);
			putchar(32);
			n++;
		}
	}
	putchar(10);

	return (0);
}
