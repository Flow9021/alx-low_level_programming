#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: parameter of the function
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
