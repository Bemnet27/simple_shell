#include "header.h"
/**
 * execute_cmd - execute a program on the child process passed from stdin
 * @_read: a line read from stdin
 *
 * Return: nothing
 */

void execute_cmd(char *_read)
{
	char *args[] = {NULL, NULL};
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
		args[0] = _read;
		if (execve(_read, args, envp) == -1)
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
