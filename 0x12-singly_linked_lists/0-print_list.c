#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints lists of node data
 * @h: head pointer
 * Return: integer number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		c++;
	}
	return (c);
}
