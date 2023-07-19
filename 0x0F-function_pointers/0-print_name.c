#include "function_pointers.h"

/**
 * print_name - prints a name using function pointers
 * @name: name to print
 * @f: function pointer to use
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
