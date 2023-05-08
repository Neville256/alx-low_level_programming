#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - STDOUT file print reads tex
 * @filename: read text file
 * @letters: read letters to number
 * Return: read and printed actual number -w
 * 0 function fails or  null is filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t cd;
	ssize_t w;
	ssize_t r;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
	return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(cd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(cd);
	return (w);
}
