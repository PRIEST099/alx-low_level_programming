#include "main.h"
/**
 * _isalpha - return if input is a letter
 * @c: print character
 * Return: null
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
return (1);
	}
	return (0);
}
