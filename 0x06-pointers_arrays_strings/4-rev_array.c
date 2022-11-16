#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp_ind, i, j;

	i = 0; /* first index */
	j = n - 1; /* last index */
	while (i < j)
	{
		tmp_ind = a[i]; /* store first index */
		a[i] = a[j]; /* swap value of first and last */
		a[j] = tmp_ind; /* transfer to last index */
		i++;
		j--;
	}
}
