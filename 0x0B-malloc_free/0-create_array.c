#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @c: parameter of the function
 * @size: parameter of the function
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
