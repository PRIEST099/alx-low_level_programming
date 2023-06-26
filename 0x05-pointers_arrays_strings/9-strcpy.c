#include "main.h"

/**
 * _strcpy - copies a string to another pointer address
 * @dest: to be returned string
 * @src: to copy string
 * Author: Ahadi
 * Returnh: null
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
