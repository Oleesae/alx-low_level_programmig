#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to head of dlistint_t
 *
 * Return: size_t (number of nodes)
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total_nodes = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_nodes++;
	}
	return (total_nodes);
}
