#include "header.h"
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	char *_read;
	char **array;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("simple_shell$ ");
		}
		_read = read_cmd();

		if (_read == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				printf("\n");
			}
			break;
		}
		array = array_word(_read, " ");
		if (array == NULL)
		{
			free(_read);
			perror("./simle_shell:");
			continue;
		}
		execute_cmd(array);
		free(_read);
		free(array);
	}
	return (0);
}
