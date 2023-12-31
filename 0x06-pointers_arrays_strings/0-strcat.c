#include "main.h"

/**
 * _strcat - a functiona that concatenates two strings
 * @dest: parameter sting
 * @src: parameter string
 * Author: Ahadi
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';

	return (dest);
}
