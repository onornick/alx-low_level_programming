#include "main.h"

/**
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int text_size = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content ==NULL)
	{
		close(fd);
		return (-1);
	}

	while (text_content[text_size] != '\0')
	{
		text_size++;
	}

	if (text_size == '0')
	{
		close(fd);
		return (0);
	}

	write(fd, text_content, text_size);
	close(fd);

	return (1);
}
