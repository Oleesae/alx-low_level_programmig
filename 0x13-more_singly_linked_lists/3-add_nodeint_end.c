#include  "lists.h"

/**
 * add_nodeint_end - add a new node to the end of list_t list
 * @head: head of the list_t list
 * @n: integer
 * Return: address ot the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL; /* holder to traverse through the list */
	listint_t *last_node;

	last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = last_node;
		return (last_node);
	}
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = last_node;
	return (last_node);
}

