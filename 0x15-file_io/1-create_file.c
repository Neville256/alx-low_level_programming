#include "main.h"
/**
 * create_file - file creation.
 * @filename: file to create pointer to name
 * @text_content: rite to file pointer
 *
 * Return: --1 should function fail
 * else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int cd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(cd, text_content, len);

	if (cd == -1 || w == -1)
		return (-1);
	close(cd);
	return (1);
}
