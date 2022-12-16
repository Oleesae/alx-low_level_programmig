#include "lists.h"

/**
 * listint_len - returns the number elements of a list_t list
 * @h: pointer to the struct list_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeTotal = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeTotal += 1;
	}
	return (nodeTotal);
}
