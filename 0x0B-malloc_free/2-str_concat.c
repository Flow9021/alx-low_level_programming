#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: parameter of the function
 * @s2: parameter of the function
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *new_str;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2);
	new_str[len1 + len2] = '\0';

	return (new_str);
}
