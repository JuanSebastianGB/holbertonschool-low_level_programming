#include "shell.h"

/**
 * execute_ls - execute ls command
 * Return: Nothing - void
 */
void execute_ls(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};


	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

}

/**
 * main - function that execute 5 child process
 * Return: always 0
 */

int main(void)
{

	int i = 0, status;
	pid_t my_pid;
	pid_t pid;

	UNUSED(my_pid);

	while (i < 5)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (pid == 0)
		{
			printf("\nEl id de este proceso es: %d\n", getpid());
			printf("Y el del padre es: %d\n", getppid());
			execute_ls();
		}
		wait(&status);
		i++;
	}

	return (0);
}
