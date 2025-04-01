#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (new_node->n == 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
