#include "lists.h"

/**
 * get_dnodeint - returns the nth node at given index
 * @head: head of list
 * @index: index to return node
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}

	return (head);
}
