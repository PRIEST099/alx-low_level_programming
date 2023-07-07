#include "main.h"

/**
 * factorial - returns a factorial of a number
 * @n: parameter of a number fo calculate its factorial
 * Author: Ahadi
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
