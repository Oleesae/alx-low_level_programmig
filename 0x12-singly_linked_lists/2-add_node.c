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
	if (new_node == NULL)
		exit(EXIT_FAILURE);

	new_node->str = strdup(str);
	new_node->len = _len(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
	free(new_node);
}
