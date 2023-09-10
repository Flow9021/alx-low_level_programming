#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 as success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
