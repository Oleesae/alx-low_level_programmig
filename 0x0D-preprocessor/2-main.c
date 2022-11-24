#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints name of file and new line
 *
 * Return: Always 0
 */

int main(void)
{
	#define FILE __FILE__

	printf("%s\n", FILE);
	return (0);
}
