#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t
 * @h: head of dlistint_t
 *
 * Return: number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_elem = 0;

	if (!h)
		return (count_elem);

	while (h)
	{
		h = h->next;
		count_elem++;
	}

	return (count_elem);
}
