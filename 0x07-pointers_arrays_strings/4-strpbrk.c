#include <string.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string input pointer
 * @accept: string input pointer
 * Return: strpbrk(s, accept)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
