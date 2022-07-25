#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: numer or args passed to program
 * @argv: and array of args
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int tf_r, tf_w, c, i, j;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	tf_r = open(argv[1], O_RDONLY);
	if (tf_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tf_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((c = read(tf_r, buf, BUFSIZ)) > 0)
	{
		if (tf_w < 0 || write(tf_w, buf, c) != c)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			close(tf_r);
			exit(99);
		}
	}
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(tf_r);
	j = close(tf_w);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close tf %d\n", tf_r);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close tf %d\n", tf_w);
		exit(100);
	}
	return (0);
}
