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

	printf("%d", (argc-1));

	return (0);
}
