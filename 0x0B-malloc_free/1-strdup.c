#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: parameter string to duplicate
 *
 * Return: string
 */

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[i++])
		len++;

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
