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
		printTokens(line);
	}
	return (0);
}

/**
 *gcc -Wall -Wextra -Werror -pedantic prompt.c -o token
*/

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


/**
 * printTokens - print tokens from line command
 * @lineReaded: Line readed like stdin
 * Return: Nothing - Void - Printing
 *
 */

void printTokens(char *lineReaded)
{
	char *token;
	const char *DELIM = " ";

	token = strtok(lineReaded, DELIM);

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, DELIM);
	}
}
