#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at idx.
 * @h: pointer to pointer of a list
 * @idx: index
 * @n: int
 * Return: add_dnodeint or add_dnodeint_end or NULL if condition are verified
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *new_node;

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{

		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;
			new_node->prev = temp->prev;
			new_node->next = temp;

			if (new_node->prev != NULL)
				new_node->prev->next = new_node;

			temp->prev = new_node;
			return (new_node);
		}

		temp = temp->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
