#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - realocates memory to new addres
 * @ptr: pointer to realocate
 * @old_size: pointer oldsize
 * @new_size: pointer new size
 *
 * Return: new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	int min;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size < new_size)
		min = old_size;
	else if (old_size > new_size)
		min = new_size;

	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	memcpy(a, ptr, min);

	free(ptr);
	return (a);
}
