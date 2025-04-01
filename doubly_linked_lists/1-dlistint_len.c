#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements of a list.
 * @h: pointer to the list
 * Return: i
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
