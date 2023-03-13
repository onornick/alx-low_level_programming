#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: count of cmd arguments
 * @argv: array of strings in cmd arguments
 * Return: Always 0.
 *
 */

int main(int argc, char *argv[])
{
	int i;
	
	if (argc > 0)
	{
		for (i = 0; argv[i] != NULL; i++)
		{
			char *p = argv[i];
			while (*p != '\0')
				{
					putchar(*p);
					p++;
				}
			putchar('\n');
		}
	}

	return (0);
}
