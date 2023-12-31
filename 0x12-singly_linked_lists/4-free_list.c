#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: head of the list
 * Return: null
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
