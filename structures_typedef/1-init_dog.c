#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * struct dog - structure de 3 infos
 * @d: pointeur vers strauct dog recevant l'adress de my_dog
 * @name: pointeur vers un char
 * @age: chiffre à virgule
 * @owner: pointeur vers un char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
