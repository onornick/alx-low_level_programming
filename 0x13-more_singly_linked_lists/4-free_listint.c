#include "lists.h"
#include <stdlib.h>

/**
 *
 */

void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
