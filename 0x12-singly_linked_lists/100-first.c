#include <stdio.h>

void init(void) __attribute__((constructor));

/**
 * init - a constructor fundtion to execute before main
 * Return: null
 */

void init(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
