#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of dlistint_t
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
	}

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
