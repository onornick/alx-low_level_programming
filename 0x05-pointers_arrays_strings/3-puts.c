#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	char value;

	value = *str;
	_putchar(value);
	_putchar('\n');
}
