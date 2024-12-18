#include "lists.h"
#include <stdlib.h>
/**
* delete_dnodeint_at_index - delete the node at index
* @head: double pointer to the head of the list
* @index: index of the node that should be deleted
* Return: 1 if it succeeded or -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
	return (-1);
	}

	current = *head;

	if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	current = current->next;

	if (current == NULL)
	return (-1);

	if (current->prev != NULL)
	current->prev->next = current->next;

	if (current->next != NULL)
	current->next->prev = current->prev;

	free(current);
	return (1);
}
