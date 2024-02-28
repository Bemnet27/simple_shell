#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
char *read_cmd();
extern char **environ;
void execute_cmd(char **array);
char **array_word(char *_read, char *delim);
char *get_env(char **env, char *needed);
#endif
