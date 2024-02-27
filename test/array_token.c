#include "header.h"
char **array_word(char *_read, char *delim)
{
	char **array;
	size_t array_size = 0;
	char *token;
	char *line_dup = strdup(_read);
	size_t i;
	
	token = strtok(line_dup, delim);
	while (token != NULL)
	{
		array_size++;
		token = strtok(NULL, delim);
	}
	array = malloc(sizeof(char *) * (array_size + 1));
	if (array == NULL)
	{
		perror("./simple_shell");
		exit(-1);
	}
	token = strtok(_read, delim);
	for (i = 0; i < array_size; i++)
	{
		array[i] = token;
		token = strtok(NULL, delim);
	}
	array[array_size] = NULL;
	return (array);
}
