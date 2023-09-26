#include <string.h>
#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: parameter of the function
 * @needle: parameter of the function
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
