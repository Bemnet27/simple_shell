#include "header.h"
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
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
	return (0);
}
