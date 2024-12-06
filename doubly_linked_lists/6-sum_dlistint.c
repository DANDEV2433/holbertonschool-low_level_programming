#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* sum_dlistint - sum of all the data (n)
* @head: A pointer to the head of the list
* Return: returns the sum of all the data (n) of a dlistint_t linked list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	return (0);

	while (ptr != NULL)
	{
	sum += ptr->n;
	ptr = ptr->next;
	}
	return (sum);
}
