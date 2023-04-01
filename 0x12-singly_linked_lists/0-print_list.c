#include "lists.h"

/**
 * print_list - prints all the elements of linkedlist
 * @h: linkedlist
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		size++;
		h = h->next;
	}

	return (size);
}
