#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string of the function
 * Return: result
 */

char *rot13(char *str)
{
	char *result = malloc(sizeof(char) * (strlen(str) + 1));
	int i = 0;

	if (result == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result[i] = (str[i] - 'a' + 13) % 26 + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[i] = (str[i] - 'A' + 13) % 26 + 'A';
		}
		else
		{
			result[i] = str[i];
		}
		i++;
	}
	result[i] = '\0';

	return (result);
}
