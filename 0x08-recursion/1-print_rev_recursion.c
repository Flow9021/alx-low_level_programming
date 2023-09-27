#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: parameter of the function
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}