#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array
 * @min: array from
 * @max: array until
 *
 * Return: integer array
 */

int *array_range(int min, int max)
{
	int *new_array;
	int i;
	int size = (max - min) + 1;

	if (min > max)
		return (NULL);

	new_array = malloc(size * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_array[i] = min + i;
	}
	return (new_array);
}
