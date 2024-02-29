#include "header.h"

void get_all_env(char **env)
{
    while (*env)
    {
        printf("%s\n", *env);
        *env++;
    }
}
