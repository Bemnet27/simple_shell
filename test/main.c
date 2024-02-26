#include "header.h"
int main()
{
	char *_read;
	while (1)
	{
		printf("simple_shell$ ");
		_read = read_cmd();
		if (_read == NULL)
		{
			printf("\n");
			break;
		}
		execute_cmd(_read);
		free(_read);
	}
	return(0);
}
