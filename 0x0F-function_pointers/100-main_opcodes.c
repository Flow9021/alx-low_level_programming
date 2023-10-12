#include "function_pointers.h"

/**
 * print_opcodes - prints codes
 * @num_bytes: parameter of the function
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	int i;

	unsigned char *ptr = (unsigned char *)&print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[1]);
	}
	printf("\n");
}

/**
 * main - entry point to the function
 * @argc: command line argument
 * @argv: command line argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
