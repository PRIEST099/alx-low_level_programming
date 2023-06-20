#include "main.h"
/**
 * _islower - prints if the letter is lower or upper case
 * Return: int c
 */
int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
