#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - a binary search function
 * @array: array to search from
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index if value is found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low, high, mid;

	if (array == NULL)
		return (-1);
	printf("\n");
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
