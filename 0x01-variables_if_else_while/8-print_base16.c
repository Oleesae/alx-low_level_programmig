#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	a = 'a';
	b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');


	return (0);
}

