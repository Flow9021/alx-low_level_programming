#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Returns the sum of a and b
 * @a: first operand
 * @b: second operand
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the results of the division a by b
 * @a: first operand
 * @b: second operand
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of the divioin of a by b
 * @a: first operand
 * @b: second operand
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf(" Error: Division by zero\n");
		return (-1);
	}
	return (a % b);
}
