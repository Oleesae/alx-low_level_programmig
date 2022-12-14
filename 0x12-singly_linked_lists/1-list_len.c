#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the head of the struct list_t
 * Return: size_t the number of elements printed
 */

size_t list_len(const list_t *h)
{
	size_t nodeTotal = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			nodeTotal += 1;

		h = h->next;
	}
	return (nodeTotal);
}
