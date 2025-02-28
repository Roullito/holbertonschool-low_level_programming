#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @s: s[]
 *
 * Return: s
 */

char *leet(char *s)
{
	int i;
	char l[] = "aAeEoOtTlL";
	char n[] = "43071";
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j / 2];
				break;
			}
		}
	}

	return (s);
}
