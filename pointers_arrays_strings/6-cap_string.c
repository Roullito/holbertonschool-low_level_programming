#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @str: str[]
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
				break;
			}
		}

	}

	return (str);
}
