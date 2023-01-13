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
 * insert_dnodeint_at_index - inserts the element of a dlistint_t at index
 * @h: pointer to head of dlistint_t
 * @idx: index to insert
 * @n: value of element
 * Return: dlistint_t address of element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, len;
	dlistint_t *new;
	dlistint_t *bef, *aft;

	if (*h)
	{
		while ((*h)->prev)
			(*h) = (*h)->prev;
	}
	len = dlistint_len(*h);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else if (idx == len - 1)
	{
		new = add_dnodeint_end(h, n);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		bef = *h;
		for (i = 0; i < idx - 1; i++)
		{
			bef = bef->next;
		}
		aft = bef->next;
		new->next = aft;
		aft->prev = new;
		bef->next = new;
		new->prev = bef;
	}
	return (new);
}
