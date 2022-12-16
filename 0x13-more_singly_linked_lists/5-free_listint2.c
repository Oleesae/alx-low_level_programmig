#include "lists.h"

/**
 * free_listint2 - frees a malloced list
 * @head: pointer to head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
		return;
	/* use recursion to access all nodes and free allocated memory */
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
