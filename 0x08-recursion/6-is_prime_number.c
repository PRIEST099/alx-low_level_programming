#include "main.h"

/**
 * prime_helper - a helper function that check if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: boolean condition
 */

int prime_helper(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}

	if (n % i == 0)
		return (0);

	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: parameter number to check
 * Author: Ahadi
 * Return: boolean condition
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_helper(n, 2));
}
