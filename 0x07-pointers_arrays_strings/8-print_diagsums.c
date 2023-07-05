#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints the diagonal sums of a square matrix
 * @a: parameter array
 * @size: parameter array size
 * Author: Ahadi
 * Return: null
 */

void print_diagsums(int *a, int size)
{
	int i, lsum = 0, rsum = 0;
	unsigned int lc = 0, rc = size - 1;

	for (i = 0; i < size; i++)
	{
		lsum += a[i * size + lc];
		rsum += a[i * size + rc];
		lc++;
		rc--;
	}
	printf("%d, %d\n", lsum, rsum);
}
