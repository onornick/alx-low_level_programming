#include "main.h"

/**
 * print_rev - rints a string, in reverse, followed by a new line.
 *
 * @s: parameter
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int i;
	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
