#include "main.h"

/**
 * _strlen - compute the lenght of a char
 * @str: string to compute the length
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: File name
 * @text_content: Content of the text of the file
 * to create
 * Return: 1 if success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0, opening, writing;

	if (!filename)
		return (-1);

	if (!text_content)
		len = _strlen(text_content);

	/* truncate and assing read and write permission 6= 110 */
	opening = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writing = write(opening, text_content, len);

	if (writing == -1 || opening == -1)
		return (-1);
	close(opening);

	return (1);

}
