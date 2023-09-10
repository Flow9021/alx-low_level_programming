#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 as success
 */

int main(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
		for (x = 0; x <= 9; x++)
			if (i < x)
				putchar(i + '0');
	putchar(' ');
	putchar('\n');
	return (0);
}
