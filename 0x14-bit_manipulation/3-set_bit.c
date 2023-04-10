#include "main.h"
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index
 * Return: 1 if success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int bit_mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	bit_mask <<= index;
	*n = (*n | bit_mask);

	return (1);
}
