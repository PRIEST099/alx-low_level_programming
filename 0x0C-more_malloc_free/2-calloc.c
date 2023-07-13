#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - uses malloc to create calloc
 * @nmemb: number of memory
 * @size: memory size
 *
 * Return: void pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	memset(result, 0, nmemb * size);

	return (result);
}
