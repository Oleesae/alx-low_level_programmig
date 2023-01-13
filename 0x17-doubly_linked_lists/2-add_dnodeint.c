#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to head of dlistint_t
 * @n: value of new node
 *
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;
	first_node->prev = NULL;
	first_node->next = *head;
	if (*head != NULL)
		(*head)->prev = first_node;
	*head = first_node;
	return (*head);
}
