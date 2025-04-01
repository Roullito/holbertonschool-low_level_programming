#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: pointer to head who point to list_t
 * @str: pointer to string
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	return (new_node);
}
