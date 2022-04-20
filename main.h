#ifndef _MAIN_H_
#define _MAIN_H_
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(void);
int _strncmp(const char *s1, const char *s2, size_t n);
char *path(char *command);
char *_strdup(char *s);
int _strlen(char *string);
void _strcat(char *path, char *command, char *command_path);
void get_each_command_argv(char **command_argv, char *input_buffer);


#endif
