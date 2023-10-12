#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - entry point to the program
 * @argc: command line argument
 * @argv: command line argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
