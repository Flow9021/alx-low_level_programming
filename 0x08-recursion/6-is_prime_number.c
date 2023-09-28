#include "main.h"

/**
 * is_prime_number - returns an integer to the input of number
 * @n: parameter of the function
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n / 3)
				&& is_prime_number(n / 2));
	}
}
