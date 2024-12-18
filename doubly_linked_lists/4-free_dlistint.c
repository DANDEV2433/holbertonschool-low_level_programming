#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* free_dlistint - function that frees a dlistint_t list
* @head: pointer to the head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
