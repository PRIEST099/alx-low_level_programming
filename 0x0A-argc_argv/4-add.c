#include "main.h"
#include <stdio.h>

/**
 * is_not_int - checks if argument is not a string
 * @a: parameter to check
 *
 * Return: status
 */

int is_not_int(char *a)
{
	int i = 0;

	if (a[i] == '+' || a[i] == '-')
	{
		i++;
	}

	while (a[i] != '\0')
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * atoi - converst a string to integer
 * @str: parameter string to convert
 * Return: int
 */

int atoi(char *str)
{
	int number = 0, sign = 1, i = 0;

	if (str[0] == '-')
	{
		sign  = -1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (sign * number);
}

/**
 * main - a program that prints sum of positive numbers
 * @argc: argument couunt
 * @argv: argument vector
 *
 * Return: status
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_not_int(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
