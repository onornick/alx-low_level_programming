#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer
 * @n: The unsigned long integer to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((bit_mask & n) == 0)
	{
		bit_mask >>= 1;
		while (bit_mask != 0)
		{
			if (bit_mask & n)
				_putchar('1');
			else
			{
				_putchar('0');
				bit_mask >>= 1;
			}
		}
}
