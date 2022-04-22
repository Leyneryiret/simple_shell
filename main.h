#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>/*para usar wait*/
#include <string.h> /*para fncion strtok*/

int main(void);
int _strncmp(const char *s1, const char *s2, size_t n);
void _path(char **path, char *path_dup);
char *_ruta(char *command);
char *_strdup(char *s);
int _strlen(char *string);
void _strcat(char *path, char *command, char *command_path);
void get_each_command_argv(char **command_argv, char *input_buffer);
void print_env(char **env);

#endif
