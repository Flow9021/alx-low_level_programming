#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 as successful
 *
 */

int main(void)
{
	char i;
	char x;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
