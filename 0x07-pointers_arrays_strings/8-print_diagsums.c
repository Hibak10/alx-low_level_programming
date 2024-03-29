#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The 1D array representing the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k * size + k];
		sum2 += a[k * size + (size - 1 - k)];
	}

	printf("%d, %d\n", sum1, sum2);
}
