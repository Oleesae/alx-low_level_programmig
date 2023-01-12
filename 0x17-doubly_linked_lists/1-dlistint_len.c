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
