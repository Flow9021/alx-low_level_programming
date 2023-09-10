#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 as success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i < 9)
			putchar(i + '0');
	putchar(' ');
	putchar('\n');
	return (0);
}
