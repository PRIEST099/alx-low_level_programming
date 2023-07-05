#include "main.h"
#include <string.h>
/**
 * _memcpy - Function that fills memory with constant byte
 * @dest: A string input pointer
 * @src: A string input pointer
 * @n: Integer input variable
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
