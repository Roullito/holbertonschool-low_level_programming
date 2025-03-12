#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure de 3 infos
 * @name: pointeur vers un char
 * @age: chiffre à virgule
 * @owner: pointeur vers un char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
