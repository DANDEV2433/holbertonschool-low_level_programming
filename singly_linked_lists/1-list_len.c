#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* list_len - Prints number of elements
* @h: A pointer to the head of the list
* Return: the number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	return (-1);
	else
	printf("[%u]\n", h->len);
	h = h->next;
	count++;
	}
	return (count);
}
