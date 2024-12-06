#include "lists.h"
#include <stdlib.h>

/**
* *insert_dnodeint_at_index - adds a new node at the beginning of a dlistint_t list
* @n: integer value in the new node
* @head: double pointer to head of node
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node, *ptr;
	idx = 0;
	
	if (h == NULL)
	return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL);
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
