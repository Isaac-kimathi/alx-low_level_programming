#include "main.h"

/**
 * create_file - function that creates a file
 * description - created file must have those permissions: rw-------.
 *  If the file already exists, do not change the permissions
 *  if the file already exists, truncate it
 *  if filename is NULL return -1
 *  if text_content is NULL create an empty file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl, res = 1, cntn = 0;

	if (!filename)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[cntn])
			cntn++;
		res = write(fl, text_content, cntn);
	}
	if (res == -1)
		return (-1);
	close(fl);
	return (1);
}
