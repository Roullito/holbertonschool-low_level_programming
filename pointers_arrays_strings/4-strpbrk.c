#include "main.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: char *s = "hello, world";
* @accept: char *f = "world";
* Return: &s[i] si trouvé et 0 sinon
*/

	char *_strpbrk(char *s, char *accept)
	{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
	return (&s[i]);
	}
	}
	}

	return (0);
	}
