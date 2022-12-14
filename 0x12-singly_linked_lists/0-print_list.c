#include "lists.h"

/**
 * print_list - prints the elements of a list_t list
 * @h: pointer to the head of the struct list_t
 * Return: size_t the number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t nodeTotal = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", h->len);
		h = h->next;
		nodeTotal += 1;
	}
	return (nodeTotal);
}
