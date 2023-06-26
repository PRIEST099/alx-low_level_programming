#include<stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array
 * @a: array to be passed
 * @n: number of elements to be printed
 * Author: Ahadi
 * Return: null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
