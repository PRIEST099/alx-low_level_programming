#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_space - ptinrs a space and a comma
 * @format: format specifier
 * @middle: counter
 * @check: checker for position
 * Return: null
 */

void print_space(const char * const format, int middle, int check)
{
	if (format[middle + 1] && check)
		printf(", ");
}

/**
 * print_all - prints strings by format specifiers provided
 * @format: format specifiers
 * Return: null
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int middle;
	char *s;

	va_start(args, format);
	if (format)
	{

	while (format[i])
	{
		middle = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				middle = 0;
				break;
		}
		print_space(format, i, middle);
		i++;
	}
	}
	va_end(args);
	printf("\n");
}
