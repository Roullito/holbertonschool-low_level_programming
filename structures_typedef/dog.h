#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure de 3 infos
 * @name: pointeur vers un char
 * @age: chiffre à virgule
 * @owner: pointeur vers un char
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
