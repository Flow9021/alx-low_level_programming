#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: parameter of the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char *str;

	int i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
