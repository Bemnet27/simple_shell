#include "header.h"

void get_all_env(char *envp[])
{
	int n = 0;
	char *envvv = envp[n];

    while (envvv != NULL)
    {
        printf("%s\n", envvv);
        n++;
	envvv = envp[n];
    }
}
