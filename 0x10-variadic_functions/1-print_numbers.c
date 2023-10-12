#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: character pointer
 * @n: parameter of the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		printf("%d", va_arg(args, int));
		for (i = 1; i < n; i++)
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
	}
	printf("\n");
	va_end(args);
}
