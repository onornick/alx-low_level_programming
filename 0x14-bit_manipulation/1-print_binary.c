#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer
 * @n: The unsigned long integer to print
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy_of_n = n, bit_mask = 1;
	int len = 0;

	while (copy_of_n > 0)
	{
		len++;
		copy_of_n >>= 1;
	}
	len -= 1;

	if (len > 0)
		bit_mask = bit_mask << len;

	while (bit_mask > 0)
	{
		if (n & bit_mask)
			_putchar('1');
		else
			_putchar('0');

		bit_mask >>= 1;
	}
}
