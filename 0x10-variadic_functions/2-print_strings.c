#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints astring and separators variadicaly
 * @separator: strings separator
 * @n: number os passed strings
 * Return: null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
