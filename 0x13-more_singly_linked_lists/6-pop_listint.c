#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns the head nodes data
 * @head: linked list
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	n = tmp->n;
	*head = tmp->next;

	return (n);


}
