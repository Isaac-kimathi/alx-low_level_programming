#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 *  POSIX standard output
 * @filename: text file to read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print || 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t _read, _write;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(fdes, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fdes);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fdes);
		return (0);
	}
	close(fdes);
	return (_read);
}
