#include "lists.h"

/**
 * get_dlistint - returns the element of a dlistint_t at index
 * @head: pointer to head of dlistint_t
 * @index: index of element
 * Return: dlistint_t address of element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	if (i > index)
		return (NULL);
	return (head);
}
