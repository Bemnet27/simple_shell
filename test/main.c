#include "header.h"
int main()
{
	char *_read = NULL;
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
		printenv(array);
		execute_cmd(array);
		free(array);
		free(_read);
	}
	return(0);
}
