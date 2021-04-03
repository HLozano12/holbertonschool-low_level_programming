#inlcude "holberton.h"
/**
 * create_file - Our Prototyle
 * Description: Create a File
 * @filename: name of the files to create
 * @text_content: Term String to write to file
 * Return: 1 on success, -1 on failure (cannot be created)
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int len = 0;

	/* filename is Null return -1 */
	if (filename == NULL)
		return (-1);
	/* open and create filename with 600 permission */
	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdesc == -1)
		return (-1);

	/* text_content is Null create empy file */
	if (text_content == NULL)
	{
		close(fdesc);
		return (1);
	}

/* Find length of text_content string */
	len = _strlen(text_content);
	if (write(fdesc, text_content, len) == -1)
	{
		close(fdesc);
		return (-1);
	}

	close(fdesc);
	return (1);

}
/**
 * _strlen - Prototype function
 * @s: our pointer
 * Description: Return length of string
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
