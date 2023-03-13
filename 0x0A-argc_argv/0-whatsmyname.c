#include "main.h"
/**
 * main - prints the name of the program
 * @argc - count of cmd arguments
 * @argv - array of strings in cmd arguments
 *
 */

int main(int argc, char *argv[])
{
	char *str = argv[0];
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
