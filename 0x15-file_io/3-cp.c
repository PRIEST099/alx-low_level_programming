#include "main.h"
#include <stdio.h>

/**
 * check_file_error - checks if files can be opened.
 * @fd_from: file descriptor for the source file.
 * @fd_to: file descriptor for the destination file.
 * @argv: arguments vector.
 * Return: no return.
 */

void check_file_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, err_close;
	ssize_t nread, nwrite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_file_error(fd_from, fd_to, argv);
	nread = 1024;
	while (nread == 1024)
	{
		nread = read(fd_from, buf, 1024);
		if (nread == -1)
			check_file_error(-1, 0, argv);
		nwrite = write(fd_to, buf, nread);
		if (nwrite == -1)
			check_file_error(0, -1, argv);
	}
	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
