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

	int len = 0;

        while (*str != '\0')
        {
                len++;
                str++;
		_putchar(str);
        }
	_putchar('\n');
}
