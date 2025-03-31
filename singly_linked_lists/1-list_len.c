#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - function that returns the number of elements list.
 * @h: pointer to the list list_t
 * Return: i (nb of elements)
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
