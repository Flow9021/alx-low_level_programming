#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a
 * pointer to a newly allocated space in memory
 *
 * @str: pointer
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len + 1);
	{
		return (new_str);
	}
}
