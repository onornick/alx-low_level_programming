#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all data n of list
 * @head: pointer to the first node
 * Return: sum
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}


	return (sum);

}


