#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a node to the start of a list
 * @head: head address
 * @str: string to duplicate
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
