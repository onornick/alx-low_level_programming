#include "main.h"
/**
 * create_file - creates file with permissions rw------- and writes content in
 * @filename: name of new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t byte_write;
	int file_descriptor;
	int text_size = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename,
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);

	if (file_descriptor == -1)
	{
		return (-1);
	}

	while (text_content[text_size] != '\0')
	{
		text_size++;
	}

	if (text_content)
	{
		byte_write = write(file_descriptor, text_content, text_size);
		if(byte_write == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
