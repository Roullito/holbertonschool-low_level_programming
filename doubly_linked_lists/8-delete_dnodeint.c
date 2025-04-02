#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @index: index
 * @head: pointer to pointer of list
 * Return: 1 if ok -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;

		free(*head);
		*head = temp;

		if (temp != NULL)
			temp->prev = NULL;

		return (1);
	}

	temp = *head;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}

		temp = temp->next;
		i++;
	}

	return (-1);
}
