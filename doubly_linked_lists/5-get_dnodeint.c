#include "lists.h"
/**
 * get_dnodeint_at_index - the nth node
 * @head: list to evaluate
 * description: function that returns the nth node of a dlistint_t linked list
 * @index: index of node to find
 *
 * Return: node found at index (SUCCESS), NULL if node does not exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (head == NULL)
	return (NULL);

	ptr = head;
	i = 0;

	while (ptr != NULL && i < index)
	{
	ptr = ptr->next;
	i++;
	}

	return (ptr);
}
