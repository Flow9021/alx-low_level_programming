#include "main.h"
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: parameter of the function
 * Return: 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int res = 0;

	while ((s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
