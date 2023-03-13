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
	int num_args = argc - 1;
	(void)argv;

	printf("%d\n", num_args);

	return (0);
}
