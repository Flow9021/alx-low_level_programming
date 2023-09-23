#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: parameter of the function
 * @s2: parameter of the function
 * Return: 1 or 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-1);
	}
	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
