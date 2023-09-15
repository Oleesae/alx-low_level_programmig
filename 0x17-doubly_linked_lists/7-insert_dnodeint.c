#include "lists.h"

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
	unsigned int count;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current = *h;
		count = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (idx == count)
			{
				if (current->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node)
					{
						new_node->n = n;
						aft = current->next;
						new_node->next = aft;
						aft->prev = new_node;
						current->next = new_node;
						new_node->prev = current;
					}
				}
				break;
			}
			count++;
			current = current->next;
		}
	}
	return (new_node);
}
