#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: parameter of the function
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (int)_strlen_recursion(s + 1));
	}
}
