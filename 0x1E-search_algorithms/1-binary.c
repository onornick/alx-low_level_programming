#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * @array: the array to be parsed
 * @size: size of the array
 * @value: the data being searched
 * Return: the index/position of the value
 * Description: function that searches for a value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t x;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: ");
		for (x = l; x <= r; x++)
		{
			printf("%d%s", array[x], x == r ? "\n" : ", ");
		}
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);

}
