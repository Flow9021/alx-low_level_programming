#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: parameter of the function
 * @size: parameter of the function
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
