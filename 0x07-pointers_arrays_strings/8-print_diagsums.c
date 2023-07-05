#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - printing the sum of the diagonals of an array
 * @a: parameter input
 * @size: parameter input size of array
 * Author: Ahadi
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + 1]'
			sum2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
