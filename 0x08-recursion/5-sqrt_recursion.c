#include "main.h"

/**
 * sqrt_recursion - returns the natural square root 
 * of a number, or returns (-1)
 * @n:number to be checked
 * Return - int
 */

int _sqrt_recursion(int n)
{
	int prev;
	int i = 0;
	int sqrt = 0;
	int value;

	while (!sqrt)
	{
		i++;
		if ((i * i) > n)
		{
			value = -1;
			sqrt = 1;
		}
		else if ((i * i) == n)
		{
			value = i;
			sqrt = 1;
		}
	}
	return (value);
}
