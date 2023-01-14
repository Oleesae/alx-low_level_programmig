#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t
 * @h: pointer to head of dlistint_t
 *
 * Return: size_t (number of nodes)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t total_nodes = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head of dlist
 * @index: index at which node is to be removed
 *
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *bef, *aft;
	unsigned int len, i;

	if (!*head)
		return (-1);
	if (*head)
	{
		while ((*head)->prev)
			(*head) = (*head)->prev;
	}
	len = dlistint_len(*head);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else if (index > 0 && index < len - 1)
	{
		bef = *head;
		for (i = 0; i < index - 1; i++)
			bef = bef->next;
		temp = bef->next;
		aft = temp->next;
		bef->next = aft;
		free(temp);
	}
	else if (index == len - 1)
	{
		bef = *head;
		temp = (*head)->next;
		while (temp->next  != NULL)
			bef = bef->next;
		bef->next = NULL;
		free(temp);
	}
	else
		return (-1);

	return (1);
}
