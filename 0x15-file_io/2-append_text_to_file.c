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
 * append_text_to_file - appends text at the end of a file.
 * @filename: File name
 * @text_content: Content of the text of the file
 * Return: 1 if success, -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0, opening, writing;

	if (!filename)
		return (-1);

	if (text_content)
		len = _strlen(text_content);

	/* Write only and append*/
	opening = open(filename, O_WRONLY | O_APPEND);
	writing = write(opening, text_content, len);

	if (writing == -1 || opening == -1)
		return (-1);
	close(opening);

	return (1);
}
