#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dlistint - that prints all the elements of a dlistint_t list
* @h: A pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
