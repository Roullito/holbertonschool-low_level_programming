#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments (unused)
 * @argv: Array of arguments (contains the program name)
 *
 * Return: Always 0 (Success)
 */

 int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
