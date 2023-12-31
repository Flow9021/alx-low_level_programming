#include <string.h>
#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: parameter of the function
 * @b: parameter of the function
 * @n: parameter of the function
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
