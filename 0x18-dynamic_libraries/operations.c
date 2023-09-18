#include "main.h"

/**
 * add - sums two integers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divides two integers and returns the result
 * @a: int
 * @b: int
 *
 * Return: int
 */

int div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * mul - returns the multiplication of two integers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - returns the modulus of two integers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int mod(int a, int b)
{
	return (a % b);
}
