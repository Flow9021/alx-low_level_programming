#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: parameter of the function
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
