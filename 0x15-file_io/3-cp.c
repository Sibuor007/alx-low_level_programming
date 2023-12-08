#include "main.h"
#include <stdio.h>

/**
 * error_file - examines whether a file can be opened
 * @file_from: source file
 * @file_to: destination file
 * @argv: indicates argument vector
 * Return: void
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - used to check code
 * @argc: provides the number of arguments
 * @argv: is the arguments vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	ssize_t _size_c, _var1;
	char _buffer[1024];
	int file_from, file_to, _close_f;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	_size_c = 1024;
	while (_size_c == 1024)
	{
		_size_c = read(file_from, _buffer, 1024);
		if (_size_c == -1)
		error_file(-1, 0, argv);
		_var1 = write(file_to, _buffer, _size_c);
		if (_var1 == -1)
		error_file(0, -1, argv);
	}

	_close_f = close(file_from);
	if (_close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error %d\n", file_from);
		exit(100);
	}

	_close_f = close(file_to);
	if (_close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error %d\n", file_from);
		exit(100);
	}
	return (0);
}
