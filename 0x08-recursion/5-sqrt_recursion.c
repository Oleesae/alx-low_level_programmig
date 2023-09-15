#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root 
 * of a number, or returns (-1)
 * @n:number to be checked
 * Return - int
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return(n);

	int mid = (n / 2) + 1;
	int lower = _sqrt_recursion(mid - 1);
	int higher = _sqrt_recursion(mid);

	if (mid * mid <= n && n < (mid + 1) * (mid + 1))
		return mid;
	else
		return -1;
}
