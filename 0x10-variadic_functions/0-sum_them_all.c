#include "variadic_functions.h"

/**
 * sum_them_all - sums n numbers
 * @n: amount of numbers to be summed
 * @...: list of numbers to be summed
 * Return: sum of all the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nm;

	va_start(nm, n);
	/* if n is zero return 0 */
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(nm, int);
	va_end(nm);
	return (sum);
}
