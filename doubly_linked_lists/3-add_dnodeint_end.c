#include "lists.h"
#include <stdlib.h>

/**
* *add_dnodeint_end - adds a new node at the end
* @n: integer value in the new node
* @head: double pointer to head of node
* description: function that adds a new node at the end of a dlistint_t list
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *current;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	current = *head;

	while (current->next != NULL)
	{
	current->next = new_node;
	new_node->prev = current;
	}
	return (new_node);
}
