#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the struct list_t
 * @index: index to be returned
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		if (node_index == index)
			return (temp);

		node_index += 1;
		temp = temp->next;
	}
	return (NULL);
}
