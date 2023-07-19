#include "function_pointers.h"

/**
 * array_iterator - iterates an array with function pointers
 * @array: array to iterate
 * @size: size of the array
 * @action: action to operate on array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
