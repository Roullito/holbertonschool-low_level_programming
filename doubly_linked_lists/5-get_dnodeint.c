#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to pointer to a list
 * @index: index of the node
 * Return: temp
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while(temp != NULL)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}

	return (NULL);
}
