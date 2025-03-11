#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
	int *array;
	int i;
	int index;

	if (min > max)
		return (NULL);


	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = min, index = 0; i <= max; i++, index++)
	{
		array[index] = i;
	}

	return (array);
}
