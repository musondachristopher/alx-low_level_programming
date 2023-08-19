#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of the file to create.
 * @text_content: Text content to write to the file.
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	ssize_t rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
