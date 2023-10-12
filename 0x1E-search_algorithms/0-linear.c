#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * @array: the array to be parsed
 * @size: size of the array
 * @value: the data being searched
 * Return: the index/position of the value
 * Description: function that searches for a value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
