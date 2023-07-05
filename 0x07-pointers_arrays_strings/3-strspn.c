#include "main.h"
#include <string.h>
/**
 *  _strspn - a function that gets the length of a prefix substring.
 * @s: string input pointer
 * @accept: string input pointer
 * Return: strspn(s, accept)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
