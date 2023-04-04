#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add new node at the end
 * @head: the first node
 * @n: data
 * Return: The address of the new element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;

	return (new_node);

	free(new_node);


}
