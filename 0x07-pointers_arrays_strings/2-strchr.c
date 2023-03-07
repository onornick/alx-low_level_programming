#include "main.h"
/**
 * _memcpy - copies memory area.
 * @src: parameter
 * @dest: parameter
 * @n: parameter
 *
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
