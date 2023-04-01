#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: linked list
 * Return: number of nodes/elements in the linked list
 */

size_t list_len(const list_t *h)
{
	siize_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
