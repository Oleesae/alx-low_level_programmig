#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: number
 * @y: power
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	/* anything to the power of less than 0 should be -1 */
	if (y < 0)
		return (-1);
	else if (y == 0) /* raised to 0 equals 1 */
		return (1);
	else 
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
