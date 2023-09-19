#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followe by a new line
 * @str: parameter of the function
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
