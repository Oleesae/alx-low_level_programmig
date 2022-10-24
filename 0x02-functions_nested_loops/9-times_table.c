#include "main.h"
#include <stdlib.h>

/**
 * times_table - prints the nine times-table
 *
 * Return: void
 */

void times_table(void)
{
	int i; /* column number variable */
	int j; /* row number variable */
	int m; /* result of multiplication variable */

	for (i = 0; i < 10; i++) /* initialize a loop to run for the columns */
	{
		for (j = 0; j < 10; j++) /* initialize a loop to run for the rows */
		{
			m = i * j; /* initialize m to be the result of each level of multiplication */

			if (m / 10) /* check if result, m is a single digit */
				_putchar('0' + (m / 10)); /* if yes output the first digit */
			else if (j != 0) /* check if row number is not equal to 0*/
				_putchar(' '); /* if not equal to 0 output a space */

			_putchar(48 + (m % 10)); /* output the last digit of the result, m */

			if (j != 9) /* if row number is not equal to 9 */
			{
				_putchar(','); /* output a comma  */
				_putchar(' '); /* output a space */
			}
		}
		_putchar('\n'); /* print a newline */
	}
}
