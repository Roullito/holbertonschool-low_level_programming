#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointeur vers la structure. il recois l'adresse de my_dog dans main
 * Return: nothing if NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("(nil)\n");

	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("(nil)\n");

	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
