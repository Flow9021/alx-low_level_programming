# include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 as success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'q' && i != 'e')
	putchar(i);
	putchar('\n');
	return (0);
}
