#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: parameter of the function
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
