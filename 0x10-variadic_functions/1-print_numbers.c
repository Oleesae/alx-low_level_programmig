#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: amount of numbers to be printed
 * @...: variadic args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i = 0;

	va_start(nm, n);
	/* check the value of n */
	if (n == 0)
		exit(EXIT_FAILURE);

	/* loop and print numbers */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nm, int));

		/* check for value of separator */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	if (i == n)
		printf("\n");
}
