#include "main.h"

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
	unsigned int i = 0;

	if ( s[i] = '\' || n = 0)
	{
		return (s);
	}

	while (i < n)
	{
	       (s + i) = b;
		i++;
	}
	return (s);
}
