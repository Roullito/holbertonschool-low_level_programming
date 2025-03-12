#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog_t, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j;
	int len_name = 0;
	int len_owner = 0;


	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;

	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';

	new_dog->age = age;

	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[j] = '\0';

	return (new_dog);
}
