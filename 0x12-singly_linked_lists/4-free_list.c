#include "lists.h"

/**
 * free_list - frees a malloced list
 * @head: pointer to head of list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->str != NULL)
		free(head->str);
	/* using recursion to free all allocated nodes in memory */
	free_list(head->next);
	free(head);
}
