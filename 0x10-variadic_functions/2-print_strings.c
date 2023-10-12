#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: character pointer
 * @n: parameter of the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		printf("%s", va_arg(args, char *));
		for (i = 1; i < n; i++)
		{
			printf("%s%s", separator, va_arg(args, char *));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(args, char *));
		}
	}
	printf("\n");
	va_end(args);
}
