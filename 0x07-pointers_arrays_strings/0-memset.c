#include "main.h"
#include <string.h>

/**
 * *_memset - sets a constant byte to memory like memset
 * @s: parameter string to be modified
 * @b: cahracter to be used
 * @n: number of elements to be changed
 * Author: ahadi
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
