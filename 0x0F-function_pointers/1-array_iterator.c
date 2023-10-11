#include "function_pointers.h"

/**
 * array_iterator - iterates the elements of an array
 *
 * @array: parameter of the function
 * @size: parameter of the function
 * @action: pointer of the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
