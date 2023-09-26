#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: parameter of the function
 * @size: parameter of the function
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int prim_dia_sum = 0;
	int sec_dia_sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		prim_dia_sum += a[i * size + i];
		sec_dia_sum += a[i * size + size - i - 1];
	}
	printf("Sum of primary diagonal: %d\n", prim_dia_sum);
	printf("Sum of seconadary diagonal: %d\n", sec_dia_sum);
}
