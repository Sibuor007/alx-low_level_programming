#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 * @filename: is the name of the file
 * @text_content:is the NULL terminated
 * string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _var1;
	int _f_name;
	int _permissions;

	if (!filename)
	return (-1);

	_var1 = open(filename, O_WRONLY | O_APPEND);

	if (_var1 == -1)
	return (-1);

	if (text_content)
	{
		for (_f_name = 0; text_content[_f_name]; _f_name++)
		;

		_permissions = write(_var1, text_content, _f_name);

		if (_permissions == -1)
		return (-1);
	}

	close(_var1);

	return (1);
}
