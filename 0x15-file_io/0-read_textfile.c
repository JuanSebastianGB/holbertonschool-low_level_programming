#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: File name
 * @letters: number of letters it should read and print
 * Return: Number of bytes the function is able to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t opening, reading, writing;

	if (!filename) /* Validating file*/
		return (0);

	/* Creating a buffer*/
	buffer = malloc(sizeof(*buffer) * letters);
	if (!buffer)
		return (0);

	opening = open(filename, O_RDONLY);
	reading = read(opening, buffer, letters);
	writing = write(STDOUT_FILENO, buffer, reading);

	if (writing != reading || writing == -1 || reading == -1
	    || opening == -1
		)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(opening);

	return (writing);
}
