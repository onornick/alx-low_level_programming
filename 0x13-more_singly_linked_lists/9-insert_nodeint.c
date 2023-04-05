#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: index of the list where node should be added
 * @n: data
 * Return: address of new node, NULL if failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *currentNode;


	unsigned int i;

	currentNode = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	for (i = 1; i < idx; i++)
	{
		currentNode = currentNode->next;

	}

	if (currentNode == NULL)
	{
		free(new_node);
		return (NULL);
	}


	new_node->next = currentNode->next;
	currentNode->next = new_node;


	return (new_node);

}
