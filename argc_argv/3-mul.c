#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	int mul;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	mul = nb1 * nb2;

	printf("%d\n", mul);

	return (0);
}
