#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a dlistint_t
 * @head: pointer to end of dlistint_t
 * @n: value of new node
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail_node, *temp;

	tail_node = malloc(sizeof(dlistint_t));
	if (tail_node == NULL)
		return (NULL);
	temp = *head;
	tail_node->n = n;
	tail_node->next = NULL;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = (temp)->next;
		(temp)->next = tail_node;
	}
	else
	{
		*head = tail_node;
	}

	tail_node->prev = temp;

	return (tail_node);
}
