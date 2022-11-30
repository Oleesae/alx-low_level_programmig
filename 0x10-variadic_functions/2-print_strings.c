#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: amount of strings to be printed
 * @...: variadic args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i;
	char *str;

	va_start(nm, n);
	/* check the value of n */
	if (n == 0)
	{
		printf("\n");
		exit(EXIT_FAILURE);
	}

	/* loop and print numbers */
	for (i = 0; i < n; i++)
	{
		str = va_arg(nm, char *);
		if (str != NULL)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");

		/* check for value of separator */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	if (i == n)
		printf("\n");
	va_end(nm);
}
