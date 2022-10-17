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

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');


	return (0);
}

