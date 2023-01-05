#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the struct list_t
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
