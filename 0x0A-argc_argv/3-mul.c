#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of the function
 * @argc: command line argument
 * @argv: command line argumet
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int product = 0;

	if (argc != 3)
	{
		printf("Erorr\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}
	product = a * b;
	printf("%d\n", product);
	return (0);
}
