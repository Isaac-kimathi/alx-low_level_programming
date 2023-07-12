#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * description - file not created if it exists
 * If filename is NULL return -1
 * If text_content is NULL, nothing added to the file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	ssize_t _write;

	if (!filename)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);

	if (!text_content)
	{
		close(fdes);
		return (1);
	}
	_write = write(fdes, text_content, strlen(text_content));
	if (_write == -1)
	{
		close(fdes);
		return (-1);
	}

	close(fdes);
	return (1);
}

