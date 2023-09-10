#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 as success
 */

int main(void)
{
	int i;
	char x;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
