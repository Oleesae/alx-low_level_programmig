#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @accept: string
 * @s: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	short int n;
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		n = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n = 1;
				break;
			}
		}
		if (!n)
			break;
	}
	reeturn (i);
}
