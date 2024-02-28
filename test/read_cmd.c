#include "header.h"
char *read_cmd()
{
	char *_read = NULL;
	size_t n = 0;
	ssize_t read_line;

	read_line = getline(&_read, &n, stdin);
	if (read_line == -1)
	{
		if (feof(stdin))
		{
			free(_read);
			return(NULL);
		}
		else
		{
			perror("./simple_sell: ");
			exit(EXIT_FAILURE);
		}
	}
	_read[strcspn(_read, "\n")] = '\0';
	return(_read);
}
