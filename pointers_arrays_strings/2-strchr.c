#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @s: pointeur vers la chaine de caractère à tester
* @c: charactère à localiser
* Return: la chaine à partir de c et retourn 0 si rien est trouvé
*/

	char *_strchr(char *s, char c)
	{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}

	if (c == '\0')
	{
	return (&s[i]);
	}

	return (0);
	}
