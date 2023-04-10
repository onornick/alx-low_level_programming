#include "main.h"
/**
 * get_bit - get bit within index
 * @n: param
 * @index: index in range
 * Return: bit 0 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
