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
		write(STDOUT_FILENO, "simple_shell$ ", 14);
		_read = read_cmd();

		if (_read == NULL)
		{
			printf("\n");
			break;
		}
		array = array_word(_read, " ");
		execute_cmd(array);
		free(_read);
		free(array);
	}
	return (0);
}