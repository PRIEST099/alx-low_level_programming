#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: number of collumns
 * @height: number of rows
 *
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	long int **array;

	if (width < 1 || height < 1)
		return (NULL);
	array = (long int **)malloc(sizeof(long int) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (long int *)malloc(sizeof(long int) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
