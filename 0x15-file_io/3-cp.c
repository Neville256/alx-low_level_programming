#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_buffer - buffer for 1024 bytes allocates
 * @file: string chars for name of file.
 *
 * Return: allocated buffer pointer
 */
char *create_buffer(char *file)
{
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"error: cannot allocate buffer %s\n", file);
		exit(99);
	}

	return buffer;
}

/**
 * close_file - file descriptors close
 * @cd: close_file
 */
void close_file(int cd);
{
	int result  = clos(cd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close cd %d\n", cd);
		exit(100);
	}
}
/**
 * main - file to another file copies contents.
 * @argc: supplied to program count
 * @argv: arguments array pointers
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
	int fd_from, fd_to, bytes_read, bytes_written;
	char *buffer[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
{
	dprintf(STDERR_FILENO, "Error: cannot read from %s\n", argv[1]);
	exit(98);
}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n" argv[2]);
		close_file(fd_from);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer,sizeof(buffer))) > 0)
{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write from %s\n", argv[2]);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
			close_file(fd_from);
			close_file(fd_to);
			exit(98);
		}

	}	while (bytes_read > 0);

		free(buffer);
		close_file(fd_from);
		close_file(fd_to);

		return 0;
}
