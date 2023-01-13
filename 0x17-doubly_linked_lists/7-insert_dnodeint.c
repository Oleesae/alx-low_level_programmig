#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the element of a dlistint_t at index
 * @h: pointer to head of dlistint_t
 * @idx: index to insert
 * @n: value of element
 * Return: dlistint_t address of element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *bef, *aft;

	if (*h)
	{
		while ((*h)->prev)
			(*h) = (*h)->prev;
	}
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
	return (new);
}
