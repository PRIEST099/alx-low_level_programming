#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - adds element to the end of a list
 * @head: the start of the list
 * @str: element data
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}

	return (newNode);
}
