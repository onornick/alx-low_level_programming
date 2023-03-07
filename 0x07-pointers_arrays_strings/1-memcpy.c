#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: parameter
 * @dest: parameter
 * @n: parameter
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
