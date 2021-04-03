#include "holberton.h"
/**
 * read_textfile - function protoype
 * Description: resd text file and print to sdout
 * @filename: Name of file in our string
 * @letters: Amount of leters to read and print
 * Return: 0 if NULL, # of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t h;
	char *buf;

	/* if filename is NULL return 0 */
	if (filename == NULL)
		return (0);

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);

	/* if failed to allocate mem */
	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	h = read(filed, buf, letters);
	if (write(STDOUT_FILENO, buf, h) == -1)
		return (0);

	close(filed);
	free(buf);
	return (h);
}
