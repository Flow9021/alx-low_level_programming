#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: parameter of the function
 * @f: parameter of the function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
