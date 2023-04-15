#include "main.h"
/**
 * create_file - creates file with permissions rw------- and writes content in
 * @filename: name of new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int lines;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}
	lines = write(file_descriptor, text_content, _strlen(text_content));
	if (lines == -1 || lines != _strlen(text_content))
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}


/**
 * _strlen -returns length of string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
        int len;

        for (len = 0; str[len] != '\0'; len++)
                ;

        return (len);
}

