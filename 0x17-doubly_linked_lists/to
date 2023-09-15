#include "lists.h"

/**
 * _len - returns the number of elements of a dlistint_t
 * @h: head of dlistint_t
 *
 * Return: number of elements in dlistint_t
 */

unsigned int _len(const dlistint_t *h)
{
	unsigned int count_elem = 0;

	if (!h)
		return (count_elem);

	while (h)
	{
		h = h->next;
		count_elem++;
	}

	return (count_elem);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of given node
 * @idx: index to insert new node
 * @n: data for new node
 *
 * Return: address to new list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *aft, *new_node = NULL;
	unsigned int count = 0, len;

	if (!*h)
		return (NULL);
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	len = _len(*h);
	current = *h;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		while (current != NULL)
		{
			if (idx == (len - 1))
			{
				new_node = add_dnodeint_end(h, n);
				break;
			}
			else if ((idx - 1) == count)
			{
				new_node = malloc(sizeof(dlistint_t));
				if (!new_node)
					return (NULL);
				new_node->n = n;
				aft = current->next;
				new_node->next = aft;
				aft->prev = new_node;
				current->next = new_node;
				new_node->prev = current;
				break;
			}
			count++;
			current = current->next;
		}
	}
	return (new_node);
}
