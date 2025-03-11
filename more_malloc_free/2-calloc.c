#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: taille du tableau
 * @size: taille octets
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	int n = 0;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = n;
	}

	return (array);

}
