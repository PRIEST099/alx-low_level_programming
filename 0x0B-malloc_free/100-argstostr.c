#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: passed argument count
 * @av: passed argument vector
 *
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, arglen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		arglen += strlen(av[j]) + 1;
	}

	array = malloc(sizeof(char) * (arglen + 1));

	if (array == NULL)
		return (NULL);

	strcpy(array, av[0]);
	strcat(array, "\n");

	for (i = 1; i < ac; i++)
	{
		strcat(array, av[i]);
		strcat(array, "\n");
	}

	return (array);
}
