#include "main.h"
/**
 * create_file - func that creates a file
 * @filename: file to be created
 * @text_content: text to include in file
 * Return: 1(success) || -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int tf, l, c = 0;

	if (!filename)
		return (-1);

	tf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (tf < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[c])
			c++;
		l = write(tf, text_content, c);
		if (l != c)
			return (-1);
	}
	close(tf);
	return (1);
}
