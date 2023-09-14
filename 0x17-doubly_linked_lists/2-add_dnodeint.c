#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a dlistint_t
 * @head: head of dlistint_t
 * @n: number of new node
 *
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	current = *head;
	
	
	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	if (current != NULL)
		current->prev = new_node;

	*head = new_node;

	return (new_node);
}
