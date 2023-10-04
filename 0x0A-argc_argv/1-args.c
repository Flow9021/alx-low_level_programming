#include <stdio.h>

/**
 * main - entry point of the function
 * @argc: command line argument
 * @argv: command line argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
