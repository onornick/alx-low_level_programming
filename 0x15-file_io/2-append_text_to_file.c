#include "main.h"

/**
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	char *buffer;
	int text_size = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0);
	if (fd == -1)
	{
		printf("holla");
		return (-1);
	}

	while (text_content[text_size] != '\0')
	{
		text_size++;
	}

	buffer = malloc(sizeof(char) * text_size);
        if (buffer == NULL)
	{
		printf("holla1");
                return (-1);
	}

	if (text_size == '0')
	{
		close(fd);
		return (0);
	}

	write(fd, buffer, text_size);
	close(fd);

	return (1);
}
