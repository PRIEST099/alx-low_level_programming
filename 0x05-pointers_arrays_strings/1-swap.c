#include "main.h"

/**
 * swap_int - swaps two integers using pointers
 * @a: first parameter
 * @b: second parameter
 * Author: Ahadi
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
