#include "main.h"
#include <string.h>

/**
 * create_file - creates a new file if it doesnt arleady exist
 * @filename: assiciated filename
 * @text_content: content to put on a file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t str_length, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		str_length = 0;
	else
		str_length = strlen(text_content);
	len = write(fd, text_content, str_length);
	if (len == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
