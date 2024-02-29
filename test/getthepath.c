#include "header.h"

char *getthepath(char *command) {
    char *mypath = getenv("PATH");
     char *path2 = strdup(mypath);
     char *thepath = strtok(path2, ":");
    if (mypath == NULL) {
        fprintf(stderr, "PATH environment variable not set\n");
        return NULL;
    }
    if (path2 == NULL) {
        perror("error in memory allocation");
        return NULL;
    }
    while (thepath != NULL) {
        char thefullpath[1024];
        snprintf(thefullpath, sizeof(thefullpath), "%s/%s", thepath, command);
        if (access(thefullpath, X_OK) == 0) {
            free(path2);
            return strdup(thefullpath);
        }
        thepath = strtok(NULL, ":");
    }
    free(path2);
    return NULL;
}

