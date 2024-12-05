#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - that prints all the elements of a dlistint_t list
* @h: A pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (count);

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}