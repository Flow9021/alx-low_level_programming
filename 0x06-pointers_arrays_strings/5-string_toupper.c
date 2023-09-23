#include <string.h>

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @n: parameter of the function
 * Return: 0 as success
 */

char *string_toupper(char *n)
{
	char *p = n;

	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}
		n++;
	}
	return (p);
}
