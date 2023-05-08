#include "main.h"

/**
 * append_text_to_file - end of a file appends text.
 * @filename: file to name pointer
 * @text_content: end of file string to add.
 *
 * Return: filename is NULL --1 function fails.
 * lacks write permissions
 * else -1 if not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int e, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	e = open(filename, O_WRONLY | O_APPEND);
	w = write(e, text_content, len);

	if (e == -1 || w == -1)
		return (-1);

	close(e);
	return (1);
}
