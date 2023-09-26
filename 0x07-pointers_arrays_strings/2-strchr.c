#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: parameter of the function
 * @c: parameter of the function
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
