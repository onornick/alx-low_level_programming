#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		sum = sum << 1;
		sum += b[i] - '0';
	}

	return (sum);
}
