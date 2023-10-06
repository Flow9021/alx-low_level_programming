#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array ot integers
 * @min: parameter of the function
 * @max: parameter of the function
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int m = 0;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; m <= max; ++i, ++min)
	{
		array[i] = min;
	}

	return (array);
}
