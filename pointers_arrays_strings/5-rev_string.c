#include "main.h"

 /**
 * rev_string - function that prints a string in reverse
 *
 * @s: address of charactere of the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int index1 = 0;
	int index2 = 0;
	int temp = 0;

	while (s[index1] != '\0')
	{
		index1++;
	}

	while (index2 < index1)
	{
		index1--;
		temp = s[index1];
		s[index1] = s[index2];
		s[index2] = temp;
		index2++;
	}
}
