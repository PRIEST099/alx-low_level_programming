#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: value parameter
 * Return: 0 if success and if uppercase
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
