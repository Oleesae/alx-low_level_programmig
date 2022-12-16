#include "lists.h"
/**
 * _len - length of a string
 * @str: string
 * Return: number
 */
size_t _len(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		continue;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of list_t
 * @str: str for new head node
 * Return: address to the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *temp = NULL; /* holder to traverse through the list */

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = _len(new_node->str);
	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = last_node;
	return (last_node);
}
