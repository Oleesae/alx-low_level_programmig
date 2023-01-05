#include "lists.h"

/**
 * pop_listint - deletes the head of a list
 * @head: head of the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return ((*head)->n);
}
