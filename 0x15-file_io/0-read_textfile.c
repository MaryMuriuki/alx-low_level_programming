#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * posix standard output
 * @filename: name of the file to be read
 * @letters: no of letters to e read and printed
 * Return: no of letters printed || 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tf;
	int c, l;
	char *buf;

	if (!filename)
		return (0);

	tf = open(filename, O_RDONLY);
	if (tf < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	c = read(tf, buf, letters);
	if (c < 0)
	{
		free(buf);
		return (0);
	}
	buf[c] = '\0';
	close(tf);

	l = write(STDOUT_FILENO, buf, c);
	if (l < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (l);
}
