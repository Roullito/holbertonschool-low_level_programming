#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
