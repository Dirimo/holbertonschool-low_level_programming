#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress unused variable warning */

	printf("%d\n", argc - 1);
	return (0);
}
