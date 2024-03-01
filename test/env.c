#include "header.h"

int printenv(char *envp[]) {
char **printenv = envp;

    while (*printenv != NULL) {
        printf("%s\n", *printenv);
        printenv++;
    }
    return 0;
}
