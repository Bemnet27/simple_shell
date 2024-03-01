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
void with_path(char **raw);
char *getthepath(char *command);
void get_all_env(char *envp[]);
int printenv(char *envp[]);
#endif
