#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of function
 *
 * Return: 0 as success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Random number: %d\n", n);
	return (0);
}
