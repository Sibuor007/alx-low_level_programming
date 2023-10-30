#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: items to be printed
 * Return: 0 on failure, size on success.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int _var1;
	char *_buffer;
	ssize_t _var2, size;

	if (!filename)
	return (0);

	_var1 = open(filename, O_RDONLY);

	if (_var1 == -1)
	return (0);

	_buffer = malloc(sizeof(char) * (letters));
	if (!_buffer)
	return (0);

	_var2 = read(_var1, _buffer, letters);
	size = write(STDOUT_FILENO, _buffer, _var2);

	close(_var1);

	free(_buffer);

	return (size);
}
