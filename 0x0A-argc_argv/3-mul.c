#include "main.h"
#include <stdio.h>

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
		sign = -1;
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
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit code
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
