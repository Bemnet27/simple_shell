#include "header.h"
extern char **environ;

void execute_cmd(char *_read)
{
	char *args[] = {NULL, NULL};
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
		if (execve(_read, args, environ) == -1)
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
