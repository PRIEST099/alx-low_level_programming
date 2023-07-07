#include "main.h"

/**
 * sqrt_helper - helper for calculating actual square root
 * @n: number to find the square root of
 * @i: counter co chenck its squareroot
 * Return: state
 */

int sqrt_helper(int n, int i)
{
	int res = i * i;

	if (res > n)
		return (-1);
	if (res == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - uses helper class to calculate the sqaure root
 * @n: parameter number to calculate its square root
 * Author: Ahadi
 * Return: number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
