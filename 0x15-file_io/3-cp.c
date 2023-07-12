#include "main.h"
#define BUF_SIZE 1024

/**
 * main -  program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: a pointer pointing to the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int fl_f, fl_t, result0, result1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	fl_t = open(argv[1], O_RDONLY);
	error_98(fl_t, buffer, argv[1]);
	fl_f = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(fl_f, buffer, argv[2]);

	do {
		result0 = read(fl_t, buffer, BUF_SIZE);
		if (result0 == 0)
			break;
		error_98(result0, buffer, argv[1]);
		result1 = write(fl_f, buffer, result0);
		error_99(result1, buffer, argv[2]);
	} while (result1 >= BUF_SIZE);

	result0 = close(fl_f);
	error_100(result0, buffer);
	result0 = close(fl_t);
	error_100(result0, buffer);
	free(buffer);

	return (0);
}

/**
 * error_98 - checks error 98
 * @fl_f: the value to check
 * @buffer: the buffer
 * @argv: arguments
 */
void error_98(int fl_f, char *buffer, char *argv)
{
	if (fl_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - checks error 99
 * @fl_f: the value to check
 * @buffer: the buffer
 * @argv: arguments
 */
void error_99(int fl_f, char *buffer, char *argv)
{
	if (fl_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * error_100 - checks error 100
 * @fl_f: the value to check
 * @buffer: the buffer
 */
void error_100(int fl_f, char *buffer)
{
	if (fl_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fl_f);
		free(buffer);
		exit(100);
	}
}
