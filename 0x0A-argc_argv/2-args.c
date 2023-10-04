#include <stdio.h>

/**
 * main - entry point of the function
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
