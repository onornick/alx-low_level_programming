#include "main.h"

/**
 * clear_bit - clear bit to 0
 * @n: param
 * @index: param
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;
	unsigned long int bit_mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	bit_mask = ~(bit_mask << index);
	*n = (*n & bit_mask);

	return (1);
}
