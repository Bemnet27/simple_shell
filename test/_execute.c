#include "header.h"

void execute_cmd(char **array)
{
	char *envp[] = {NULL};
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("./simple_shell ");
		exit(-1);
	}
	else if (pid == 0)
	{
		if (execve(array[0], array, envp) == -1)
		{
			perror("./simple_shell ");
			exit(-1);
		}
	}
	else
	{
		wait(NULL);
	}
}
