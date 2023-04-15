#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: name of file
 * @letters: letters is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t lines;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	if ((file = open(filename, O_RDONLY)) == -1)
	{
		return (0);
	}

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		close(file);
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}
	lines = read(file, buffer, letters);
	if (lines == -1)
	{
		return (0);
	}

	write (STDOUT_FILENO, buffer, lines);
	close(file);
	free(buffer);
	return (lines);
}
