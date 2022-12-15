#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of list_t
 * @str: str for new head node
 * Return: address to the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (str == NULL)
	{
		str = "(nil)";
	}
	new_node->str = strdup(str);
	new_node->len = len(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
