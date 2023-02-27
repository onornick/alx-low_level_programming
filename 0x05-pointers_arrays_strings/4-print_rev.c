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
	for (int i = len - 1; i >= 0; i--)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
