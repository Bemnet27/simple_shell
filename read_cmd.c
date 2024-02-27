#include "header.h"
/**
 * read_cmd - reads a line from stdin
 *
 * Return: a string
 */
char *read_cmd()
{
	char *line = NULL;
	size_t n = 0;
	ssize_t read_line;

	read_line = getline(&line, &n, stdin);
	if (read_line == -1)
	{
		if (feof(stdin))
		{
			return (NULL);
		}
		else
		{
			perror("./simple_sell: ");
			exit(-1);
		}
	}
	line[strcspn(line, "\n")] = '\0';
	return (line);
}
