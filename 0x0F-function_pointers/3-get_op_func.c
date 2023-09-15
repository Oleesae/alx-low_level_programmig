#include "3-calc.h"

/**
 * get_op_func - returns a function pointer that matches
 * has an operator that matches s
 * @s: the operator char
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i] != NULL)
	{
		if (ops[i]->op == s)
			return ops[i]->f(int,int);
		i++;
	}
	return (0);				
}
