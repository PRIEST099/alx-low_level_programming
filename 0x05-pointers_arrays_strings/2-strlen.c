#include "main.h"

/**
 * _strlen - returns the size of a string
 * @s: the string parameter
 * Author: Ahadi
 * Return: null
 */

int _strlen(char *s)
{
	int length;
	
	length = 0;
	while (*s++)
		length++;
	return (length);
}
