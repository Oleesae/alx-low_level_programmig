#include <string.h>
#include "main.h"


/**
 * main - Entry Point
 *
 * pritn '_putchar' followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "_putchar";
	int len = strlen(a); /* set length of str 'a' in a variable */
	int i = 0;

	while (i < len)
	{
		_putchar(a[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
