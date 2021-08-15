#include "shell.h"

/*This one must be avoided*/
extern char **environ;

/**
 * main - Print in both ways, like param
 * and like global variable the enviroment
 * @argc: Number of args that receive the program
 * @av: char array with params passed to program
 * @env: enviroment variable
 * Return: Always 0 - printing
 *
 */
int main(int argc, char **av __attribute__((unused)), char **env)
{
	int i = 0;

	UNUSED(argc);
	printf("main environ variable printing\n");
	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	i = 0;
	printf("\n Here start environ global var printing\n");
	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}

	/* using getenv()*/

	printf("\n Enviroment content of PATH using getenv PATH=%s \n",
	       getenv("PATH"));

	return (0);
}
