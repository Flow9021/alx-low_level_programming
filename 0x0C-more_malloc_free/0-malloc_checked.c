#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory during malloc
 * @b: parameter of the function
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed to allocate %u bytes.\n", b);
		exit(98);
	}
	return (p);
}
