#include "lists.h"

/**
 * print_listint - prints the elements of a list_t list
 * @h: pointer to the struct list_t
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeTotal = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeTotal += 1;
	}

	return (nodeTotal);
}
