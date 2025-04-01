#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
