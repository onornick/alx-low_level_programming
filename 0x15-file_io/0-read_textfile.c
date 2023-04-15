#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: name of file
 * @letters: letters is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	int i;
	ssize_t lines;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		fclose(file);
		return (0);
	lines = fread(buffer, sizeof(char), letters, file);

	if (lines == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
	fclose(file);
	free(buffer);
	return (lines);
}
