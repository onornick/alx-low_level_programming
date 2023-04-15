#include "main.h"
/**
 * create_file - creates file with permissions rw------- and writes content in
 * @filename: name of new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	char *buffer;
	ssize_t read_lines;
	int file_descriptor, text_size;

	if (!filename)
		return (-1);

	file_descriptor = open(filename,
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);

	if (!file_descriptor)
	{
		close(file_descriptor);
		return (-1);
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	while (text_content[text_size] != '\0')
	{
		text_size++;
	}
	buffer = malloc((sizeof(char)) * (text_size));
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	read_lines = read(file_descriptor, buffer, text_size);
	if (read_lines == -1)
	{
		return (1);
	}

	write(STDOUT_FILENO, buffer, read_lines);
	close(file_descriptor);

	return (0);
}
