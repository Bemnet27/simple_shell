#include "header.h"
ssize_t read_cmd()
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
	{
		perror("./hsh: 1: ");
		return(-1);
	}
	return(0);
}
