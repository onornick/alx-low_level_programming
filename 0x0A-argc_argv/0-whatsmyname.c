#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count of cmd arguments
 * @argv: array of strings in cmd arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (argv[0][i])
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');

	return (0);
}
