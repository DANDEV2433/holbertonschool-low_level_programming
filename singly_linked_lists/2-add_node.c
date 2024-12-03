#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - check the code
* @str: Write a function that returns the length of a string
* Return: i
*/
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
* *add_node - adds a new node at the beginning of a list_t
* @str: string to be added to the new node
* @head: double pointer to the head
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
