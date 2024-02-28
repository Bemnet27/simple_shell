#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
char *read_cmd();
void execute_cmd(char **array);
char **array_word(char *_read, char *delim);
extern char **environ;
#endif
