#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer to the list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		i++;
		h = h->next;
	}

	return (i);
}
