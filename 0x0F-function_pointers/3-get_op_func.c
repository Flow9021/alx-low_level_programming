#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct fuction
 * to perform the operation
 * @s: the operator passed as an argument to the
 * program
 * Return: pointer to the corresponding function or NULL
 * if the operator is invalid
 */
int(*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && s[i] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
