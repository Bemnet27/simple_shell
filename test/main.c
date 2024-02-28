#include "header.h"
int main()
{
	char *_read;
	char **array;
	while (1)
	{
		printf("simple_shell$ ");
		_read = read_cmd();
		if (_read == NULL)
		{
			printf("\n");
			break;
		}
		array = array_word(_read, " ");
		execute_cmd(array);
		free(array);
		free(_read);
	}
	return(0);
}
