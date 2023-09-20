#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: parameter of the function
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int mid = length / 2;
	int i;

	if (length % 2 == 0)
	{
		for (i = mid; i < length; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = mid; i < length + 1; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
