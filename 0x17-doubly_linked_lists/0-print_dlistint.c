#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: head of dlistint_t
 *
 * Return: number of elements in dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_elem = 0;

	if (!h)
		return (count_elem);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_elem++;
	}

	return (count_elem);
}
