#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of list_t
 * @n: data for new node
 * Return: address to the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
