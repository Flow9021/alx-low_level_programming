#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: parameter of the function
 * @accept: parameter of the function
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *c;

	while (*s != '\0')
	{
		for (c = accept; *c != '\0'; c++)
		{
			if (*s == *c)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
