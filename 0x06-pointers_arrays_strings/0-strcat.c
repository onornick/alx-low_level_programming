#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * Return: Always 0.
 *
 * @dest: parameters
 * @src: 2nd parameter
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}

