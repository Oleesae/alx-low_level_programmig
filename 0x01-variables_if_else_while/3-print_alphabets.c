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


	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');


	return (0);
}

