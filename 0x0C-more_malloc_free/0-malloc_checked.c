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
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
