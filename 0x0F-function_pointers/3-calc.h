#ifndef CALC_H
#define CALC_H

/**
 * struct op - structure to define an operation
 * @op: the opeartor(string)
 * @f: the function associated with the operator
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - function to perform addition
 * @a: first operand
 * @b: second operand
 * Return: Result of the addition
 */
int op_add(int a, int b);

/**
 * op_sub - function to perform subtraction
 * @a: first operand
 * @b: second operand
 * Return: result of the subtraction
 */
int op_sub(int a, int b);

/**
 * op_mul - function that performs multiplication
 * @a: first operand
 * @b: second operand
 * Return: result of the multiplication
 */
int op_mul(int a, int b);

/**
 * op_div - function that performs division
 * @a: first operand
 * @b: second operand
 * Return: result of the division
 */
int op_div(int a, int b);

/**
 * op_mod - function to perform modulo
 * @a: first operand
 * @b: second operand
 * Return: result of the modulo opeartion
 */
int op_mod(int a, int b);

#endif
