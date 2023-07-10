#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
