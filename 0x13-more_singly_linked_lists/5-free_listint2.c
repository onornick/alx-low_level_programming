#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to first node
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		free(currentNode);
	}

	*head = NULL;
}
