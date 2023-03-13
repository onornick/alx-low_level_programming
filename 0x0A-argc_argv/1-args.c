#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of cmd arguments
 * @argc: cmd count
 * @argv: argument vectors
 * Return: Always 0.
 *
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc => 1)
	{
		printf("%d", argc);
		printf("\n");
	}
	return (0);
}
