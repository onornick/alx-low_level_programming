#include "main.h"

/**
 *_strncat - concatenates two strings.
 *
 * Return: Always 0.
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*p != '\0')
	{
		p++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(p++) = src[i];
	}
	*p = '\0';
	return (dest);
}

