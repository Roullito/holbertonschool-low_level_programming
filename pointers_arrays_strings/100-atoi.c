#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: point vers nb
 *
 * Return: result * sign
 */

int _atoi(char *s)
{
	int i;
	int result = 0;
	int sign = 1;
	int find = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			find = 1;
		}

		else if (s[i] == '-' && find == 0)
		{
			sign = sign * -1;
		}

		else if (s[i] == '+' && find == 0)
		{

		}

		else if (find == 1)
			{
				break;
			}
	}
return (result * sign);
}
