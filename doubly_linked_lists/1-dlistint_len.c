#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* dlistint_len - Prints number of elements
* @h: A pointer to the head of the list
* Return: the number of elements in a linked list_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
