#include "shell.h"

int main(void)
{

	char *prompt = "$ ";
	char *line;
	size_t len_line = 0;

	while (1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		getline(&line, &len_line, stdin);
		write(STDOUT_FILENO, line, _strlen(line));
	}
	return (0);
}

/**
 * _strlen - to return the length of a string
 * @str: string to coompute the length
 * Return: The lenght
 *
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}
