#include "lists.h"

/**
 * sum_dlistint - returns the sum of elements of a dlistint_t
 * @head: pointer to head of dlistint_t
 *
 * Return: int (sum of nodes(n))
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int i;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
