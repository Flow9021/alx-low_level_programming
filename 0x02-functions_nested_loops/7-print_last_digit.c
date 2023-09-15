#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: parameter of the function
 * Return: n
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (i < 10)
		n = -n;
	_putchar(n + '0');
	return (n);
}
