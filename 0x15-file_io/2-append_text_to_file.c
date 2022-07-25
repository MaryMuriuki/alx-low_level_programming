#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append
 * @text_content: text to add to file
 * Return: 1(success) || -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tf, l, c = 0;

	if (!filename)
		return (-1);

	tf = open(filename, O_WRONLY | O_APPEND);
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
