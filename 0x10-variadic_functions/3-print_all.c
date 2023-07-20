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
	char c, *s;
	float f;
	int num, middle;

	va_start(args, format);
	while (format && format[i])
	{
		middle = 1;
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
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
	va_end(args);
	printf("\n");
}
