#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: first paramenter
 * @y: second parameter as power value
 * Author: Ahadi
 * Return: resurt
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == -0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
