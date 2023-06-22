#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: parameter value to be checked
 * Return: 1 if found a digit and 0 otherwise
 */

int _isdigit(int c)
{
	char i;
	int ret = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			ret = 1;
			break;
		}
	}

	return (ret);
}
