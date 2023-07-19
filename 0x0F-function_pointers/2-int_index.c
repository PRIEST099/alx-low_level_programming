#include "function_pointers.h"

/**
 * int_index - searches for integer in array
 * @array: array to search in
 * @size: size of the array
 * @cmp: function pointer to use
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
