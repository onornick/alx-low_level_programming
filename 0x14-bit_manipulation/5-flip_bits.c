#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: param
 * @m: param
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int diff;

	/* Xor both nums to show bit 1 if different bits */
	diff = n ^ m;

	/* keep shifting diff to right and tallying the ones up */
	do {
		flips += (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);

		return (flips);
}
