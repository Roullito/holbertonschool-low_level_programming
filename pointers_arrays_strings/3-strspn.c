#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
*
* @s: char *s = "hello, world"
* @accept: char *f = "oleh";
*
* Return: compteur
*/

	unsigned int _strspn(char *s, char *accept)
	{
	int i;
	int j;
	int compteur = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
	found = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	compteur++;
	found = 1;
	break;
	}
	}

	if (found == 0)
	break;
	}

	return (compteur);
	}
