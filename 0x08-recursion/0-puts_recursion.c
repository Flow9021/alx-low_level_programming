#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: parameter of the function
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	puts(s);
}
