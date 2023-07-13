#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory and chexks for failures
 * @b: size of the memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
