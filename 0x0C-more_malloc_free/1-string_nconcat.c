#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: parameter of the function
 * @s2: parameter of the function
 * @n: parameter of the function
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	char *result;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}
	result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
