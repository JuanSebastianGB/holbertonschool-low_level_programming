#include "main.h"

/**
 * main - function to copy content of file origin
 * to file destiny
 * @argc: number of arguments passed
 * @argv: Array of pointers of the incoming arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	char *buffer;
	int _bytes_selected = 1024;
	ssize_t origin, destiny, reading, writing;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = _buffer(argv[2], _bytes_selected);
	origin = open(argv[1], O_RDONLY);
	/* rw-rw-r-- 664 */
	destiny = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	reading = read(origin, buffer, _bytes_selected);
	if (origin == -1 || destiny == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	writing = write(destiny, buffer, reading);
	if (destiny == -1 || writing == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	destiny = open(argv[2], O_WRONLY | O_APPEND);
	reading = read(origin, buffer, _bytes_selected);

	free(buffer);
	_close(origin, destiny);

	return (0);

}

/**
 * *_buffer - creates a buffer with selected byte allocated
 * @file: Name of the file
 * @bytes_selected: size of the expected buffer
 * Return: Char with the specific length
 */
char *_buffer(char *file, int bytes_selected)
{
	char *buffer;

	buffer = malloc(sizeof(*buffer) * bytes_selected);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s",
			file);
		exit(99);
	}
	return (buffer);
}
/**
 * _close - Closing files origin and destiny
 * @origin: Origin file
 * @destiny: Destiny file
 * Return: Nothing - void
 */
void _close(ssize_t origin, ssize_t destiny)
{
	ssize_t i, j;

	i = close(origin);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %zd\n", origin);
		exit(100);
	}
	j = close(destiny);
	if (j == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %zd\n", destiny);
		exit(100);
	}
}
