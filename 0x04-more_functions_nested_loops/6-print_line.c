#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: parameter of the function
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}

	_putchar('\n');
}
