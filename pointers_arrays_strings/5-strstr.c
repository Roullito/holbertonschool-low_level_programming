#include "main.h"

/**
* *_strstr - function that searches a string for any of a set of bytes.
* @haystack: char *s = "hello, world"
* @accept: char *f = "world";
* Return: &haystack[i] si tte la sting est = à needle et 0 sinon
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	if (haystack[i] == needle[0])
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}

	if (needle[j] == '\0')
	return (&haystack[i]);
	}
	}

	return (0);
}
