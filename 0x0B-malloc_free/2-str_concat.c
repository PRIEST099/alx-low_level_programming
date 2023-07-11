#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenaded string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0;
	char *constr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	constr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (constr == NULL)
		return (NULL);

	strcpy(constr, s1);
	strcat(constr, s2);

	return (constr);
}

